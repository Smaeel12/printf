#!/bin/bash
file_name="example.txt"; window_width=$(stty size | cut -d" " -f2)
underscores=$(printf "%*s" $(( (window_width - ${#file_name} - 4) / 2 )) "" | tr ' ' '_')
printf "%s %s %s\n" "$underscores" "$file_name" "$underscores"

