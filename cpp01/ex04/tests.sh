#!/bin/bash

rm -rf tests
mkdir -p tests
cp sifl ./tests
cd tests

## No write permissions

echo "Ce fichier peut être lu, mais no_write.replace ne peut être écrit" > no_write
echo "Ce fichier ne peut pas être traîté" > no_write.replace
chmod 0 no_write.replace
echo -e "\n >>> Testing faulty write permissions -- should fail\n"
valgrind --track-fds=yes ./sifl "no_write" "fichier" "file"
# ./sifl "no_write" "fichier" "file"

## No read permissions

echo "Ce fichier ne peut pas être lu" > no_read
chmod 0 no_read
echo -e "\n >>> Testing faulty read permissions -- should fail\n"
valgrind --track-fds=yes ./sifl "no_read" "fichier" "file"
# ./sifl "no_read" "fichier" "file"

## Directory

mkdir directory.file
echo -e "\n >>> Testing directory -- should fail\n"
valgrind --track-fds=yes ./sifl "directory" "fichier" "file"
# ./sifl "directory" "fichier" "file"

## Non-existent file

echo -e "\n >>> Testing non-existent file -- should fail\n"
valgrind --track-fds=yes ./sifl "dfsjkonoijhdsjhiokfdshjiokfsjdhjhkisdfhjikfdshjifsdhjksdfhjk" "fichier" "file"
# ./sifl "dfsjkonoijhdsjhiokfdshjiokfsjdhjhkisdfhjikfdshjifsdhjksdfhjk" "fichier" "file"

echo "Fichier fichier fichier f1ch1er" > file

## No needle
echo -e "\n >>> Testing no needle (no changes)\n"
echo -n "before: "
cat file
valgrind --track-fds=yes ./sifl "file" "" "file"
# ./sifl "file" "" "file"
echo -n "after : "
cat file.replace

## No replacement
echo -e "\n >>> Testing no replacement (fichier -> <nothing>) (changes)\n"
echo -n "before: "
cat file
valgrind --track-fds=yes ./sifl "file" "fichier" ""
# ./sifl "file" "fichier" ""
echo -n "after : "
cat file.replace

## Empty args
echo -e "\n >>> Testing empty args (no changes)\n"
echo -n "before: "
cat file
valgrind --track-fds=yes ./sifl "file" "" ""
# ./sifl "file" "" ""
echo -n "after : "
cat file.replace

## Correct usage
echo -e "\n >>> Testing correct usage (fichier -> demo) (changes)\n"
echo -n "before: "
cat file
valgrind --track-fds=yes ./sifl "file" "fichier" "demo"
# ./sifl "file" "fichier" "demo"
echo -n "after : "
cat file.replace

## Correct multi-line
echo -e "\n >>> Testing correct multi-line (fichier -> demo) (changes)\n"
echo -e "Fichier\nfichier\nfichier\nf1ch1er\nfichier fichier\nfichier\n\n\n\n\nfichier" > file2
echo -e "\nbefore: \n"
cat file2
valgrind --track-fds=yes ./sifl "file2" "fichier" "demo"
# ./sifl "file2" "fichier" "demo"
echo -e "\nafter : \n"
cat file2.replace

cd ..
rm -rf tests