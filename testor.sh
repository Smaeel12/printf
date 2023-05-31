#!/bin/bash

for n in {0..18}
do
	# declare variables
	file_name="main_$n.txt"
	txt_file="/home/vagrant/shared_files/main_$n.txt"
	old_name="/home/vagrant/printf/main_$n.txt"
	new_name="/home/vagrant/printf/0-main.c"

	# copy and rename the main file
	cp "$txt_file" "/home/vagrant/printf/"
	mv "$old_name" "$new_name"
	
	#count main file lines
	line_number=$(($(wc -l < "/home/vagrant/printf/0-main.c")))
	
	# add the lines needed to main file
	sed -i "${line_number}i\\\tprintf(\"\\\nCONGRATS\\\n\");" "$new_name"


	# compile and run
	printf "___________________________ %s _______________________________\n" "$file_name"
	gcc -Wno-format *.c
	./a.out
	printf "\n\n"
done
