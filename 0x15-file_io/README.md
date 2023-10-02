# C- File I/O

File Input/Output (I/O) in the C programming language allows you to work with files on your computer's storage. It enables you to read data from files (File Input) and write data to files (File Output). Here's a brief description of C File I/O:

File Streams:

C provides a set of standard library functions for file I/O, which use file streams. The standard streams in C are stdin (standard input), stdout (standard output), and stderr (standard error).
You can open your own files for reading or writing using functions like fopen() to create a file stream.
Opening and Closing Files:

To open a file, you use fopen(). It returns a pointer to a FILE structure, which represents the file stream.
To close a file, you use fclose(). It's essential to close files when you're done to release system resources.
Reading from Files:

To read data from a file, you use functions like fscanf(), fgets(), or fread(). These functions allow you to read different types of data from a file, such as text or binary data.
Writing to Files:

To write data to a file, you use functions like fprintf(), fputs(), or fwrite(). These functions allow you to write text or binary data to a file.
File Position:

The fseek() function allows you to set the file position indicator, which determines where the next read or write operation will occur within the file.
Error Handling:

File I/O functions typically return error codes or set global variables like errno to indicate errors. You should check these values to handle errors gracefully.
