var functions = [{
  "method_name" : "remove",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "const char*"
  }
},
{
  "method_name" : "rename",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "const char*",
	  "arg" : "const char*"
  }
},
{
  "method_name" : "renameat",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "int",
	  "arg" : "const char*",
	  "arg" : "int",
	  "arg" : "const char*"
  }
},
{
  "method_name" : "tmpfile",
  "return_value" : "FILE*",
  "arguments" : {
	  "arg" : "void"
  }
},
{
  "method_name" : "__REDIRECT",
  "return_value" : "FILE*",
  "arguments" : {
	  "arg" : "tmpfile",
	  "arg" : "(void)",
	  "arg" : "tmpfile64"
  }
},
{
  "method_name" : "tmpfile64",
  "return_value" : "FILE*",
  "arguments" : {
	  "arg" : "void"
  }
},
{
  "method_name" : "tmpnam",
  "return_value" : "char*",
  "arguments" : {
	  "arg" : "char*"
  }
},
{
  "method_name" : "tmpnam_r",
  "return_value" : "char*",
  "arguments" : {
	  "arg" : "char*"
  }
},
{
  "method_name" : "tempnam",
  "return_value" : "char*",
  "arguments" : {
	  "arg" : "const char*",
	  "arg" : "const char*"
  }
},
{
  "method_name" : "fclose",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "fflush",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "fflush_unlocked",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "fcloseall",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "void"
  }
},
{
  "method_name" : "fopen",
  "return_value" : "FILE*",
  "arguments" : {
	  "arg" : "const char*",
	  "arg" : "const char*"
  }
},
{
  "method_name" : "freopen",
  "return_value" : "FILE*",
  "arguments" : {
	  "arg" : "const char*",
	  "arg" : "const char*",
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "__REDIRECT",
  "return_value" : "FILE*",
  "arguments" : {
	  "arg" : "fopen",
	  "arg" : "(const char*",
	  "arg" : "const char*",
	  "arg" : "fopen64"
  }
},
{
  "method_name" : "__REDIRECT",
  "return_value" : "FILE*",
  "arguments" : {
	  "arg" : "freopen",
	  "arg" : "(const char*",
	  "arg" : "const char*",
	  "arg" : "FILE*",
	  "arg" : "freopen64"
  }
},
{
  "method_name" : "fopen64",
  "return_value" : "FILE*",
  "arguments" : {
	  "arg" : "const char*",
	  "arg" : "const char*"
  }
},
{
  "method_name" : "freopen64",
  "return_value" : "FILE*",
  "arguments" : {
	  "arg" : "const char*",
	  "arg" : "const char*",
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "fdopen",
  "return_value" : "FILE*",
  "arguments" : {
	  "arg" : "int",
	  "arg" : "const char*"
  }
},
{
  "method_name" : "fopencookie",
  "return_value" : "FILE*",
  "arguments" : {
	  "arg" : "void*",
	  "arg" : "const char*",
	  "arg" : "_IO_cookie_io_functions_t"
  }
},
{
  "method_name" : "fmemopen",
  "return_value" : "FILE*",
  "arguments" : {
	  "arg" : "void*",
	  "arg" : "size_t",
	  "arg" : "const char*"
  }
},
{
  "method_name" : "open_memstream",
  "return_value" : "FILE*",
  "arguments" : {
	  "arg" : "char*",
	  "arg" : "size_t*"
  }
},
{
  "method_name" : "setbuf",
  "return_value" : "void",
  "arguments" : {
	  "arg" : "FILE*",
	  "arg" : "char*"
  }
},
{
  "method_name" : "setvbuf",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "FILE*",
	  "arg" : "char*",
	  "arg" : "int",
	  "arg" : "size_t"
  }
},
{
  "method_name" : "setbuffer",
  "return_value" : "void",
  "arguments" : {
	  "arg" : "FILE*",
	  "arg" : "char*",
	  "arg" : "size_t"
  }
},
{
  "method_name" : "setlinebuf",
  "return_value" : "void",
  "arguments" : {
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "fprintf",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "FILE*",
	  "arg" : "const char*",
	  "arg" : "..."
  }
},
{
  "method_name" : "printf",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "const char*",
	  "arg" : "..."
  }
},
{
  "method_name" : "sprintf",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "char*",
	  "arg" : "const char*",
	  "arg" : "..."
  }
},
{
  "method_name" : "vfprintf",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "FILE*",
	  "arg" : "const char*",
	  "arg" : "_G_va_list"
  }
},
{
  "method_name" : "vprintf",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "const char*",
	  "arg" : "_G_va_list"
  }
},
{
  "method_name" : "vsprintf",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "char*",
	  "arg" : "const char*",
	  "arg" : "_G_va_list"
  }
},
{
  "method_name" : "snprintf",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "char*",
	  "arg" : "size_t",
	  "arg" : "const char*",
	  "arg" : "...)",
	  "arg" : "3",
	  "arg" : "4))"
  }
},
{
  "method_name" : "vsnprintf",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "char*",
	  "arg" : "size_t",
	  "arg" : "const char*",
	  "arg" : "_G_va_list",
	  "arg" : "3",
	  "arg" : "0))"
  }
},
{
  "method_name" : "vasprintf",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "char*",
	  "arg" : "const char*",
	  "arg" : "_G_va_list",
	  "arg" : "2",
	  "arg" : "0))"
  }
},
{
  "method_name" : "__asprintf",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "char*",
	  "arg" : "const char*",
	  "arg" : "...)",
	  "arg" : "2",
	  "arg" : "3))"
  }
},
{
  "method_name" : "asprintf",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "char*",
	  "arg" : "const char*",
	  "arg" : "...)",
	  "arg" : "2",
	  "arg" : "3))"
  }
},
{
  "method_name" : "vdprintf",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "int",
	  "arg" : "const char*",
	  "arg" : "_G_va_list",
	  "arg" : "2",
	  "arg" : "0))"
  }
},
{
  "method_name" : "dprintf",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "int",
	  "arg" : "const char*",
	  "arg" : "...)",
	  "arg" : "2",
	  "arg" : "3))"
  }
},
{
  "method_name" : "fscanf",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "FILE*",
	  "arg" : "const char*",
	  "arg" : "..."
  }
},
{
  "method_name" : "scanf",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "const char*",
	  "arg" : "..."
  }
},
{
  "method_name" : "sscanf",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "const char*",
	  "arg" : "const char*",
	  "arg" : "..."
  }
},
{
  "method_name" : "__REDIRECT",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "fscanf",
	  "arg" : "(FILE*",
	  "arg" : "const char*",
	  "arg" : "...)",
	  "arg" : ""
  }
},
{
  "method_name" : "__REDIRECT",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "scanf",
	  "arg" : "(const char*",
	  "arg" : "...)",
	  "arg" : ""
  }
},
{
  "method_name" : "__REDIRECT_NTH",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "sscanf",
	  "arg" : "(const char*",
	  "arg" : "const char*",
	  "arg" : "...)",
	  "arg" : ""
  }
},
{
  "method_name" : "__isoc99_fscanf",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "FILE*",
	  "arg" : "const char*",
	  "arg" : "..."
  }
},
{
  "method_name" : "__isoc99_scanf",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "const char*",
	  "arg" : "..."
  }
},
{
  "method_name" : "__isoc99_sscanf",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "const char*",
	  "arg" : "const char*",
	  "arg" : "..."
  }
},
{
  "method_name" : "vfscanf",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "FILE*",
	  "arg" : "const char*",
	  "arg" : "_G_va_list",
	  "arg" : "2",
	  "arg" : "0))"
  }
},
{
  "method_name" : "vscanf",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "const char*",
	  "arg" : "_G_va_list",
	  "arg" : "1",
	  "arg" : "0))"
  }
},
{
  "method_name" : "vsscanf",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "const char*",
	  "arg" : "const char*",
	  "arg" : "_G_va_list",
	  "arg" : "2",
	  "arg" : "0))"
  }
},
{
  "method_name" : "__REDIRECT",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "vfscanf",
	  "arg" : "(FILE*",
	  "arg" : "const char*",
	  "arg" : "_G_va_list",
	  "arg" : "",
	  "arg" : "2",
	  "arg" : "0))"
  }
},
{
  "method_name" : "__REDIRECT",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "vscanf",
	  "arg" : "(const char*",
	  "arg" : "_G_va_list",
	  "arg" : "",
	  "arg" : "1",
	  "arg" : "0))"
  }
},
{
  "method_name" : "__REDIRECT_NTH",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "vsscanf",
	  "arg" : "(const char*",
	  "arg" : "const char*",
	  "arg" : "_G_va_list",
	  "arg" : "",
	  "arg" : "2",
	  "arg" : "0))"
  }
},
{
  "method_name" : "__isoc99_vfscanf",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "FILE*",
	  "arg" : "const char*",
	  "arg" : "_G_va_list"
  }
},
{
  "method_name" : "__isoc99_vscanf",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "const char*",
	  "arg" : "_G_va_list"
  }
},
{
  "method_name" : "__isoc99_vsscanf",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "const char*",
	  "arg" : "const char*",
	  "arg" : "_G_va_list"
  }
},
{
  "method_name" : "fgetc",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "getc",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "getchar",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "void"
  }
},
{
  "method_name" : "getc_unlocked",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "getchar_unlocked",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "void"
  }
},
{
  "method_name" : "fgetc_unlocked",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "fputc",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "int",
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "putc",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "int",
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "putchar",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "int"
  }
},
{
  "method_name" : "fputc_unlocked",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "int",
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "putc_unlocked",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "int",
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "putchar_unlocked",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "int"
  }
},
{
  "method_name" : "getw",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "putw",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "int",
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "fgets",
  "return_value" : "char*",
  "arguments" : {
	  "arg" : "char*",
	  "arg" : "int",
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "gets",
  "return_value" : "char*",
  "arguments" : {
	  "arg" : "char*"
  }
},
{
  "method_name" : "fgets_unlocked",
  "return_value" : "char*",
  "arguments" : {
	  "arg" : "char*",
	  "arg" : "int",
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "__getdelim",
  "return_value" : "_IO_ssize_t",
  "arguments" : {
	  "arg" : "char*",
	  "arg" : "size_t*",
	  "arg" : "int",
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "getdelim",
  "return_value" : "_IO_ssize_t",
  "arguments" : {
	  "arg" : "char*",
	  "arg" : "size_t*",
	  "arg" : "int",
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "getline",
  "return_value" : "_IO_ssize_t",
  "arguments" : {
	  "arg" : "char*",
	  "arg" : "size_t*",
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "fputs",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "const char*",
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "puts",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "const char*"
  }
},
{
  "method_name" : "ungetc",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "int",
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "fread",
  "return_value" : "size_t",
  "arguments" : {
	  "arg" : "void*",
	  "arg" : "size_t",
	  "arg" : "size_t",
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "fwrite",
  "return_value" : "size_t",
  "arguments" : {
	  "arg" : "const void*",
	  "arg" : "size_t",
	  "arg" : "size_t",
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "fputs_unlocked",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "const char*",
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "fread_unlocked",
  "return_value" : "size_t",
  "arguments" : {
	  "arg" : "void*",
	  "arg" : "size_t",
	  "arg" : "size_t",
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "fwrite_unlocked",
  "return_value" : "size_t",
  "arguments" : {
	  "arg" : "const void*",
	  "arg" : "size_t",
	  "arg" : "size_t",
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "fseek",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "FILE*",
	  "arg" : "long int",
	  "arg" : "int"
  }
},
{
  "method_name" : "int",
  "return_value" : "long",
  "arguments" : {
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "rewind",
  "return_value" : "void",
  "arguments" : {
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "fseeko",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "FILE*",
	  "arg" : "",
	  "arg" : "int"
  }
},
{
  "method_name" : "ftello",
  "return_value" : "__off_t",
  "arguments" : {
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "__REDIRECT",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "fseeko",
	  "arg" : "(FILE*",
	  "arg" : "",
	  "arg" : "int",
	  "arg" : "fseeko64"
  }
},
{
  "method_name" : "__REDIRECT",
  "return_value" : "__off64_t",
  "arguments" : {
	  "arg" : "ftello",
	  "arg" : "(FILE*",
	  "arg" : "ftello64"
  }
},
{
  "method_name" : "fgetpos",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "FILE*",
	  "arg" : "fpos_t*"
  }
},
{
  "method_name" : "fsetpos",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "FILE*",
	  "arg" : "const fpos_t*"
  }
},
{
  "method_name" : "__REDIRECT",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "fgetpos",
	  "arg" : "(FILE*",
	  "arg" : "fpos_t*",
	  "arg" : "fgetpos64"
  }
},
{
  "method_name" : "__REDIRECT",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "fsetpos",
	  "arg" : "(FILE*",
	  "arg" : "const fpos_t*",
	  "arg" : "fsetpos64"
  }
},
{
  "method_name" : "fseeko64",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "FILE*",
	  "arg" : "",
	  "arg" : "int"
  }
},
{
  "method_name" : "ftello64",
  "return_value" : "__off64_t",
  "arguments" : {
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "fgetpos64",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "FILE*",
	  "arg" : "fpos64_t*"
  }
},
{
  "method_name" : "fsetpos64",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "FILE*",
	  "arg" : "const fpos64_t*"
  }
},
{
  "method_name" : "clearerr",
  "return_value" : "void",
  "arguments" : {
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "feof",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "ferror",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "clearerr_unlocked",
  "return_value" : "void",
  "arguments" : {
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "feof_unlocked",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "ferror_unlocked",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "perror",
  "return_value" : "void",
  "arguments" : {
	  "arg" : "const char*"
  }
},
{
  "method_name" : "fileno",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "fileno_unlocked",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "popen",
  "return_value" : "FILE*",
  "arguments" : {
	  "arg" : "const char*",
	  "arg" : "const char*"
  }
},
{
  "method_name" : "pclose",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "ctermid",
  "return_value" : "char*",
  "arguments" : {
	  "arg" : "char*"
  }
},
{
  "method_name" : "cuserid",
  "return_value" : "char*",
  "arguments" : {
	  "arg" : "char*"
  }
},
{
  "method_name" : "obstack_printf",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "struct obstack*",
	  "arg" : "const char*",
	  "arg" : "...)",
	  "arg" : "2",
	  "arg" : "3))"
  }
},
{
  "method_name" : "obstack_vprintf",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "struct obstack*",
	  "arg" : "const char*",
	  "arg" : "_G_va_list",
	  "arg" : "2",
	  "arg" : "0))"
  }
},
{
  "method_name" : "flockfile",
  "return_value" : "void",
  "arguments" : {
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "ftrylockfile",
  "return_value" : "int",
  "arguments" : {
	  "arg" : "FILE*"
  }
},
{
  "method_name" : "funlockfile",
  "return_value" : "void",
  "arguments" : {
	  "arg" : "FILE*"
  }
}];