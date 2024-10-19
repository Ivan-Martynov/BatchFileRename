Currently tested on Linux only.

Renaming/moving many files at once.

The main purpose is to show how the task could be done. Obviously, there are other tools availabe, which suit better for the purpose.

Repository contains several tools.

batch_rename_files - renaming files at once.
The program expects file paths and options. By default the files are not renamed - the program only defines how the renamed file might look like.
The options:
    -h or -help: show this help information;
    -r or -recursive: process directories recursively;
    -v or -verbose: output information about modified name to the terminal;
    -dm or -do-modify: do the actual renaming of the file (WARNING: make sure you know what you are doing);
    -dow or -do-overwrite: overwrite existing items if the new path names match the existing item (WARNING: make sure you know what you are doing);
    -dowu or -do-overwrite-update: overwrite existing items if the new path names match the existing item and the new file is newer (WARNING: make sure you know what you are doing);
    -dnow or -do-not-overwrite: do not overwrite existing items if the new path names match the existing item;
    -nf or -no-filenames: do not process file names;
    -d or -directories: process directories too;
    -do or -directories-only: process directories only;
    -e or -extensions: process extensions too;
    -eo or -extensions-only: process extensions only;
    -sbn or -sort-by-name: sort items by name;
    -sbnd or -sort-by-name-descending: sort items by name in descending order;
    -sbs or -sort-by-size: sort items by size (currently only affecting files, that is not sorting directories by size);
    -sbsd or -sort-by-size-descending: sort items by size in descending order (currently only affecting files, that is not sorting directories by size);
    -sbt or -sort-by-timestamp: sort items by timestamp (when it was last modified);
    -sbtd or -sort-by-timestamp-descending: sort items by timestamp in descending order (when it was last modified);
    -c or -clear: clear the content
    -rur or -replace-using-regex: replace substring represented as a regular expression with a replacement. Must be followed by two values: the expression to match and a replacement string. For example, -replace-using-regex \"[0-9]\" to remove all digits. WARNING, not all regular expressions can be sed. For instance, \\ character (backslash) can trigger erminal\'s special state, stopping the execution;
    -rsw or -replace-substring-with: replace substring with a replacement. Must be followed by two values: the text to match and a replacement string;
    -rww or -replace-whitespace-with: replace whitespaces with a replacement. Must be followed by a replacement string;
    -rwwu or -replace-whitespace-with-underscore: replace whitespaces with underscores;
    -tu or -to-uppercase: change item name to uppercase;
    -tl or -to-lowercase: change item name to lowercase;
    -tc or -to-camelcase: change item name to camelcase;
    -an or -append-number: append numbers sequentially to items. Typically used to order files or folders.
    -pn or -prepend-number: prepend numbers sequentially to items;
    -at or -append-timestamp: append item\'s timestamp to the item;
    -pt or -prepend-timestamp: prepend item\'s timestamp to the item;
    -act or -append-current-time: append current time to the item;
    -pct or -prepend-current-time: prepend current time to the item;

mp3_batch_rename_files - renaming mp3 files at once. Has functionality of using simple mp3 tag data (e.g., title, artist).

organize_files - move files into folders based on their date. Basically, creating folder structure year/month/ or other, using the options to build the hierarchy.

show_disk_usage - simple utility showing how much space is used/availabe on the given partition.

