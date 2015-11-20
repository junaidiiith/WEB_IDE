[{
  "method_name" : "remove",
  "return_value" : "int",
  "arguments" : "const char *__filename"
},
{
  "method_name" : "rename",
  "return_value" : "int",
  "arguments" : "const char *__old, const char *__new"
},
{
  "method_name" : "renameat",
  "return_value" : "int",
  "arguments" : "int __oldfd, const char *__old, int __newfd, const char *__new"
},
{
  "method_name" : "tmpfile",
  "return_value" : "FILE*",
  "arguments" : "void"
},
{
  "method_name" : "__REDIRECT",
  "return_value" : "FILE*",
  "arguments" : "tmpfile, (void), tmpfile64"
},
{
  "method_name" : "tmpfile64",
  "return_value" : "FILE*",
  "arguments" : "void"
},
{
  "method_name" : "tmpnam",
  "return_value" : "char*",
  "arguments" : "char *__s"
},
{
  "method_name" : "tmpnam_r",
  "return_value" : "char*",
  "arguments" : "char *__s"
},
{
  "method_name" : "tempnam",
  "return_value" : "char*",
  "arguments" : "const char *__dir, const char *__pfx"
},
{
  "method_name" : "fclose",
  "return_value" : "int",
  "arguments" : "FILE *__stream"
},
{
  "method_name" : "fflush",
  "return_value" : "int",
  "arguments" : "FILE *__stream"
},
{
  "method_name" : "fflush_unlocked",
  "return_value" : "int",
  "arguments" : "FILE *__stream"
},
{
  "method_name" : "fcloseall",
  "return_value" : "int",
  "arguments" : "void"
},
{
  "method_name" : "fopen",
  "return_value" : "FILE*",
  "arguments" : "const char *__restrict __filename, const char *__restrict __modes"
},
{
  "method_name" : "freopen",
  "return_value" : "FILE*",
  "arguments" : "const char *__restrict __filename, const char *__restrict __modes, FILE *__restrict __stream"
},
{
  "method_name" : "__REDIRECT",
  "return_value" : "FILE*",
  "arguments" : "fopen, (const char *__restrict __filename, const char *__restrict __modes), fopen64"
},
{
  "method_name" : "__REDIRECT",
  "return_value" : "FILE*",
  "arguments" : "freopen, (const char *__restrict __filename, const char *__restrict __modes, FILE *__restrict __stream), freopen64"
},
{
  "method_name" : "fopen64",
  "return_value" : "FILE*",
  "arguments" : "const char *__restrict __filename, const char *__restrict __modes"
},
{
  "method_name" : "freopen64",
  "return_value" : "FILE*",
  "arguments" : "const char *__restrict __filename, const char *__restrict __modes, FILE *__restrict __stream"
},
{
  "method_name" : "fdopen",
  "return_value" : "FILE*",
  "arguments" : "int __fd, const char *__modes"
},
{
  "method_name" : "fopencookie",
  "return_value" : "FILE*",
  "arguments" : "void *__restrict __magic_cookie, const char *__restrict __modes, _IO_cookie_io_functions_t __io_funcs"
},
{
  "method_name" : "fmemopen",
  "return_value" : "FILE*",
  "arguments" : "void *__s, size_t __len, const char *__modes"
},
{
  "method_name" : "open_memstream",
  "return_value" : "FILE*",
  "arguments" : "char **__bufloc, size_t *__sizeloc"
},
{
  "method_name" : "setbuf",
  "return_value" : "void",
  "arguments" : "FILE *__restrict __stream, char *__restrict __buf"
},
{
  "method_name" : "setvbuf",
  "return_value" : "int",
  "arguments" : "FILE *__restrict __stream, char *__restrict __buf, int __modes, size_t __n"
},
{
  "method_name" : "setbuffer",
  "return_value" : "void",
  "arguments" : "FILE *__restrict __stream, char *__restrict __buf, size_t __size"
},
{
  "method_name" : "setlinebuf",
  "return_value" : "void",
  "arguments" : "FILE *__stream"
},
{
  "method_name" : "fprintf",
  "return_value" : "int",
  "arguments" : "FILE *__restrict __stream, const char *__restrict __format, ..."
},
{
  "method_name" : "printf",
  "return_value" : "int",
  "arguments" : "const char *__restrict __format, ..."
},
{
  "method_name" : "sprintf",
  "return_value" : "int",
  "arguments" : "char *__restrict __s, const char *__restrict __format, ..."
},
{
  "method_name" : "vfprintf",
  "return_value" : "int",
  "arguments" : "FILE *__restrict __s, const char *__restrict __format, _G_va_list __arg"
},
{
  "method_name" : "vprintf",
  "return_value" : "int",
  "arguments" : "const char *__restrict __format, _G_va_list __arg"
},
{
  "method_name" : "vsprintf",
  "return_value" : "int",
  "arguments" : "char *__restrict __s, const char *__restrict __format, _G_va_list __arg"
},
{
  "method_name" : "snprintf",
  "return_value" : "int",
  "arguments" : "char *__restrict __s, size_t __maxlen, const char *__restrict __format, ..."
},
{
  "method_name" : "vsnprintf",
  "return_value" : "int",
  "arguments" : "char *__restrict __s, size_t __maxlen, const char *__restrict __format, _G_va_list __arg"
},
{
  "method_name" : "vasprintf",
  "return_value" : "int",
  "arguments" : "char **__restrict __ptr, const char *__restrict __f, _G_va_list __arg"
},
{
  "method_name" : "__asprintf",
  "return_value" : "int",
  "arguments" : "char **__restrict __ptr, const char *__restrict __fmt, ..."
},
{
  "method_name" : "asprintf",
  "return_value" : "int",
  "arguments" : "char **__restrict __ptr, const char *__restrict __fmt, ..."
},
{
  "method_name" : "vdprintf",
  "return_value" : "int",
  "arguments" : "int __fd, const char *__restrict __fmt, _G_va_list __arg"
},
{
  "method_name" : "dprintf",
  "return_value" : "int",
  "arguments" : "int __fd, const char *__restrict __fmt, ..."
},
{
  "method_name" : "fscanf",
  "return_value" : "int",
  "arguments" : "FILE *__restrict __stream, const char *__restrict __format, ..."
},
{
  "method_name" : "scanf",
  "return_value" : "int",
  "arguments" : "const char *__restrict __format, ..."
},
{
  "method_name" : "sscanf",
  "return_value" : "int",
  "arguments" : "const char *__restrict __s, const char *__restrict __format, ..."
},
{
  "method_name" : "__REDIRECT",
  "return_value" : "int",
  "arguments" : "fscanf, (FILE *__restrict __stream, const char *__restrict __format, ...), __isoc99_fscanf"
},
{
  "method_name" : "__REDIRECT",
  "return_value" : "int",
  "arguments" : "scanf, (const char *__restrict __format, ...), __isoc99_scanf"
},
{
  "method_name" : "__REDIRECT_NTH",
  "return_value" : "int",
  "arguments" : "sscanf, (const char *__restrict __s, const char *__restrict __format, ...), __isoc99_sscanf"
},
{
  "method_name" : "__isoc99_fscanf",
  "return_value" : "int",
  "arguments" : "FILE *__restrict __stream, const char *__restrict __format, ..."
},
{
  "method_name" : "__isoc99_scanf",
  "return_value" : "int",
  "arguments" : "const char *__restrict __format, ..."
},
{
  "method_name" : "__isoc99_sscanf",
  "return_value" : "int",
  "arguments" : "const char *__restrict __s, const char *__restrict __format, ..."
},
{
  "method_name" : "vfscanf",
  "return_value" : "int",
  "arguments" : "FILE *__restrict __s, const char *__restrict __format, _G_va_list __arg"
},
{
  "method_name" : "vscanf",
  "return_value" : "int",
  "arguments" : "const char *__restrict __format, _G_va_list __arg"
},
{
  "method_name" : "vsscanf",
  "return_value" : "int",
  "arguments" : "const char *__restrict __s, const char *__restrict __format, _G_va_list __arg"
},
{
  "method_name" : "__REDIRECT",
  "return_value" : "int",
  "arguments" : "vfscanf, (FILE *__restrict __s, const char *__restrict __format, _G_va_list __arg), __isoc99_vfscanf"
},
{
  "method_name" : "__REDIRECT",
  "return_value" : "int",
  "arguments" : "vscanf, (const char *__restrict __format, _G_va_list __arg), __isoc99_vscanf"
},
{
  "method_name" : "__REDIRECT_NTH",
  "return_value" : "int",
  "arguments" : "vsscanf, (const char *__restrict __s, const char *__restrict __format, _G_va_list __arg), __isoc99_vsscanf"
},
{
  "method_name" : "__isoc99_vfscanf",
  "return_value" : "int",
  "arguments" : "FILE *__restrict __s, const char *__restrict __format, _G_va_list __arg"
},
{
  "method_name" : "__isoc99_vscanf",
  "return_value" : "int",
  "arguments" : "const char *__restrict __format, _G_va_list __arg"
},
{
  "method_name" : "__isoc99_vsscanf",
  "return_value" : "int",
  "arguments" : "const char *__restrict __s, const char *__restrict __format, _G_va_list __arg"
},
{
  "method_name" : "fgetc",
  "return_value" : "int",
  "arguments" : "FILE *__stream"
},
{
  "method_name" : "getc",
  "return_value" : "int",
  "arguments" : "FILE *__stream"
},
{
  "method_name" : "getchar",
  "return_value" : "int",
  "arguments" : "void"
},
{
  "method_name" : "getc_unlocked",
  "return_value" : "int",
  "arguments" : "FILE *__stream"
},
{
  "method_name" : "getchar_unlocked",
  "return_value" : "int",
  "arguments" : "void"
},
{
  "method_name" : "fgetc_unlocked",
  "return_value" : "int",
  "arguments" : "FILE *__stream"
},
{
  "method_name" : "fputc",
  "return_value" : "int",
  "arguments" : "int __c, FILE *__stream"
},
{
  "method_name" : "putc",
  "return_value" : "int",
  "arguments" : "int __c, FILE *__stream"
},
{
  "method_name" : "putchar",
  "return_value" : "int",
  "arguments" : "int __c"
},
{
  "method_name" : "fputc_unlocked",
  "return_value" : "int",
  "arguments" : "int __c, FILE *__stream"
},
{
  "method_name" : "putc_unlocked",
  "return_value" : "int",
  "arguments" : "int __c, FILE *__stream"
},
{
  "method_name" : "putchar_unlocked",
  "return_value" : "int",
  "arguments" : "int __c"
},
{
  "method_name" : "getw",
  "return_value" : "int",
  "arguments" : "FILE *__stream"
},
{
  "method_name" : "putw",
  "return_value" : "int",
  "arguments" : "int __w, FILE *__stream"
},
{
  "method_name" : "fgets",
  "return_value" : "char*",
  "arguments" : "char *__restrict __s, int __n, FILE *__restrict __stream"
},
{
  "method_name" : "gets",
  "return_value" : "char*",
  "arguments" : "char *__s"
},
{
  "method_name" : "fgets_unlocked",
  "return_value" : "char*",
  "arguments" : "char *__restrict __s, int __n, FILE *__restrict __stream"
},
{
  "method_name" : "__getdelim",
  "return_value" : "_IO_ssize_t",
  "arguments" : "char **__restrict __lineptr, size_t *__restrict __n, int __delimiter, FILE *__restrict __stream"
},
{
  "method_name" : "getdelim",
  "return_value" : "_IO_ssize_t",
  "arguments" : "char **__restrict __lineptr, size_t *__restrict __n, int __delimiter, FILE *__restrict __stream"
},
{
  "method_name" : "getline",
  "return_value" : "_IO_ssize_t",
  "arguments" : "char **__restrict __lineptr, size_t *__restrict __n, FILE *__restrict __stream"
},
{
  "method_name" : "fputs",
  "return_value" : "int",
  "arguments" : "const char *__restrict __s, FILE *__restrict __stream"
},
{
  "method_name" : "puts",
  "return_value" : "int",
  "arguments" : "const char *__s"
},
{
  "method_name" : "ungetc",
  "return_value" : "int",
  "arguments" : "int __c, FILE *__stream"
},
{
  "method_name" : "fread",
  "return_value" : "size_t",
  "arguments" : "void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream"
},
{
  "method_name" : "fwrite",
  "return_value" : "size_t",
  "arguments" : "const void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __s"
},
{
  "method_name" : "fputs_unlocked",
  "return_value" : "int",
  "arguments" : "const char *__restrict __s, FILE *__restrict __stream"
},
{
  "method_name" : "fread_unlocked",
  "return_value" : "size_t",
  "arguments" : "void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream"
},
{
  "method_name" : "fwrite_unlocked",
  "return_value" : "size_t",
  "arguments" : "const void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream"
},
{
  "method_name" : "fseek",
  "return_value" : "int",
  "arguments" : "FILE *__stream, long int __off, int __whence"
},
{
  "method_name" : "int",
  "return_value" : "long",
  "arguments" : "FILE *__stream"
},
{
  "method_name" : "rewind",
  "return_value" : "void",
  "arguments" : "FILE *__stream"
},
{
  "method_name" : "fseeko",
  "return_value" : "int",
  "arguments" : "FILE *__stream, __off_t __off, int __whence"
},
{
  "method_name" : "ftello",
  "return_value" : "__off_t",
  "arguments" : "FILE *__stream"
},
{
  "method_name" : "__REDIRECT",
  "return_value" : "int",
  "arguments" : "fseeko, (FILE *__stream, __off64_t __off, int __whence), fseeko64"
},
{
  "method_name" : "__REDIRECT",
  "return_value" : "__off64_t",
  "arguments" : "ftello, (FILE *__stream), ftello64"
},
{
  "method_name" : "fgetpos",
  "return_value" : "int",
  "arguments" : "FILE *__restrict __stream, fpos_t *__restrict __pos"
},
{
  "method_name" : "fsetpos",
  "return_value" : "int",
  "arguments" : "FILE *__stream, const fpos_t *__pos"
},
{
  "method_name" : "__REDIRECT",
  "return_value" : "int",
  "arguments" : "fgetpos, (FILE *__restrict __stream, fpos_t *__restrict __pos), fgetpos64"
},
{
  "method_name" : "__REDIRECT",
  "return_value" : "int",
  "arguments" : "fsetpos, (FILE *__stream, const fpos_t *__pos), fsetpos64"
},
{
  "method_name" : "fseeko64",
  "return_value" : "int",
  "arguments" : "FILE *__stream, __off64_t __off, int __whence"
},
{
  "method_name" : "ftello64",
  "return_value" : "__off64_t",
  "arguments" : "FILE *__stream"
},
{
  "method_name" : "fgetpos64",
  "return_value" : "int",
  "arguments" : "FILE *__restrict __stream, fpos64_t *__restrict __pos"
},
{
  "method_name" : "fsetpos64",
  "return_value" : "int",
  "arguments" : "FILE *__stream, const fpos64_t *__pos"
},
{
  "method_name" : "clearerr",
  "return_value" : "void",
  "arguments" : "FILE *__stream"
},
{
  "method_name" : "feof",
  "return_value" : "int",
  "arguments" : "FILE *__stream"
},
{
  "method_name" : "ferror",
  "return_value" : "int",
  "arguments" : "FILE *__stream"
},
{
  "method_name" : "clearerr_unlocked",
  "return_value" : "void",
  "arguments" : "FILE *__stream"
},
{
  "method_name" : "feof_unlocked",
  "return_value" : "int",
  "arguments" : "FILE *__stream"
},
{
  "method_name" : "ferror_unlocked",
  "return_value" : "int",
  "arguments" : "FILE *__stream"
},
{
  "method_name" : "perror",
  "return_value" : "void",
  "arguments" : "const char *__s"
},
{
  "method_name" : "fileno",
  "return_value" : "int",
  "arguments" : "FILE *__stream"
},
{
  "method_name" : "fileno_unlocked",
  "return_value" : "int",
  "arguments" : "FILE *__stream"
},
{
  "method_name" : "popen",
  "return_value" : "FILE*",
  "arguments" : "const char *__command, const char *__modes"
},
{
  "method_name" : "pclose",
  "return_value" : "int",
  "arguments" : "FILE *__stream"
},
{
  "method_name" : "ctermid",
  "return_value" : "char*",
  "arguments" : "char *__s"
},
{
  "method_name" : "cuserid",
  "return_value" : "char*",
  "arguments" : "char *__s"
},
{
  "method_name" : "obstack_printf",
  "return_value" : "int",
  "arguments" : "struct obstack *__restrict __obstack, const char *__restrict __format, ..."
},
{
  "method_name" : "obstack_vprintf",
  "return_value" : "int",
  "arguments" : "struct obstack *__restrict __obstack, const char *__restrict __format, _G_va_list __args"
},
{
  "method_name" : "flockfile",
  "return_value" : "void",
  "arguments" : "FILE *__stream"
},
{
  "method_name" : "ftrylockfile",
  "return_value" : "int",
  "arguments" : "FILE *__stream"
},
{
  "method_name" : "funlockfile",
  "return_value" : "void",
  "arguments" : "FILE *__stream"
}]