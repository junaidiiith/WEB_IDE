[{
  "method_name" : "pthread_sigmask",
  "return_value" : "int",
  "arguments" : "int __how, const __sigset_t *__restrict __newmask, __sigset_t *__restrict __oldmask"
},
{
  "method_name" : "pthread_kill",
  "return_value" : "int",
  "arguments" : "pthread_t __threadid, int __signo"
},
{
  "method_name" : "pthread_sigqueue",
  "return_value" : "int",
  "arguments" : "pthread_t __threadid, int __signo, const union sigval __value"
}]