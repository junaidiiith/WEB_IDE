[{
  "method_name" : "__sysv_signal",
  "return_value" : "__sighandler_t",
  "arguments" : "int __sig, __sighandler_t __handler"
},
{
  "method_name" : "sysv_signal",
  "return_value" : "__sighandler_t",
  "arguments" : "int __sig, __sighandler_t __handler"
},
{
  "method_name" : "signal",
  "return_value" : "__sighandler_t",
  "arguments" : "int __sig, __sighandler_t __handler"
},
{
  "method_name" : "__REDIRECT_NTH",
  "return_value" : "__sighandler_t",
  "arguments" : "signal, (int __sig, __sighandler_t __handler), __sysv_signal"
},
{
  "method_name" : "bsd_signal",
  "return_value" : "__sighandler_t",
  "arguments" : "int __sig, __sighandler_t __handler"
},
{
  "method_name" : "kill",
  "return_value" : "int",
  "arguments" : "__pid_t __pid, int __sig"
},
{
  "method_name" : "killpg",
  "return_value" : "int",
  "arguments" : "__pid_t __pgrp, int __sig"
},
{
  "method_name" : "raise",
  "return_value" : "int",
  "arguments" : "int __sig"
},
{
  "method_name" : "ssignal",
  "return_value" : "__sighandler_t",
  "arguments" : "int __sig, __sighandler_t __handler"
},
{
  "method_name" : "gsignal",
  "return_value" : "int",
  "arguments" : "int __sig"
},
{
  "method_name" : "psignal",
  "return_value" : "void",
  "arguments" : "int __sig, const char *__s"
},
{
  "method_name" : "psiginfo",
  "return_value" : "void",
  "arguments" : "const siginfo_t *__pinfo, const char *__s"
},
{
  "method_name" : "__sigpause",
  "return_value" : "int",
  "arguments" : "int __sig_or_mask, int __is_sig"
},
{
  "method_name" : "sigpause",
  "return_value" : "int",
  "arguments" : "int __sig"
},
{
  "method_name" : "sigblock",
  "return_value" : "int",
  "arguments" : "int __mask"
},
{
  "method_name" : "sigsetmask",
  "return_value" : "int",
  "arguments" : "int __mask"
},
{
  "method_name" : "siggetmask",
  "return_value" : "int",
  "arguments" : "void"
},
{
  "method_name" : "sigemptyset",
  "return_value" : "int",
  "arguments" : "sigset_t *__set"
},
{
  "method_name" : "sigfillset",
  "return_value" : "int",
  "arguments" : "sigset_t *__set"
},
{
  "method_name" : "sigaddset",
  "return_value" : "int",
  "arguments" : "sigset_t *__set, int __signo"
},
{
  "method_name" : "sigdelset",
  "return_value" : "int",
  "arguments" : "sigset_t *__set, int __signo"
},
{
  "method_name" : "sigismember",
  "return_value" : "int",
  "arguments" : "const sigset_t *__set, int __signo"
},
{
  "method_name" : "sigisemptyset",
  "return_value" : "int",
  "arguments" : "const sigset_t *__set"
},
{
  "method_name" : "sigandset",
  "return_value" : "int",
  "arguments" : "sigset_t *__set, const sigset_t *__left, const sigset_t *__right"
},
{
  "method_name" : "sigorset",
  "return_value" : "int",
  "arguments" : "sigset_t *__set, const sigset_t *__left, const sigset_t *__right"
},
{
  "method_name" : "sigprocmask",
  "return_value" : "int",
  "arguments" : "int __how, const sigset_t *__restrict __set, sigset_t *__restrict __oset"
},
{
  "method_name" : "sigsuspend",
  "return_value" : "int",
  "arguments" : "const sigset_t *__set"
},
{
  "method_name" : "sigaction",
  "return_value" : "int",
  "arguments" : "int __sig, const struct sigaction *__restrict __act, struct sigaction *__restrict __oact"
},
{
  "method_name" : "sigpending",
  "return_value" : "int",
  "arguments" : "sigset_t *__set"
},
{
  "method_name" : "sigwait",
  "return_value" : "int",
  "arguments" : "const sigset_t *__restrict __set, int *__restrict __sig"
},
{
  "method_name" : "sigwaitinfo",
  "return_value" : "int",
  "arguments" : "const sigset_t *__restrict __set, siginfo_t *__restrict __info"
},
{
  "method_name" : "sigtimedwait",
  "return_value" : "int",
  "arguments" : "const sigset_t *__restrict __set, siginfo_t *__restrict __info, const struct timespec *__restrict __timeout"
},
{
  "method_name" : "sigqueue",
  "return_value" : "int",
  "arguments" : "__pid_t __pid, int __sig, const union sigval __val"
},
{
  "method_name" : "sigvec",
  "return_value" : "int",
  "arguments" : "int __sig, const struct sigvec *__vec, struct sigvec *__ovec"
},
{
  "method_name" : "sigreturn",
  "return_value" : "int",
  "arguments" : "struct sigcontext *__scp"
},
{
  "method_name" : "siginterrupt",
  "return_value" : "int",
  "arguments" : "int __sig, int __interrupt"
},
{
  "method_name" : "sigstack",
  "return_value" : "int",
  "arguments" : "struct sigstack *__ss, struct sigstack *__oss"
},
{
  "method_name" : "sigaltstack",
  "return_value" : "int",
  "arguments" : "const struct sigaltstack *__restrict __ss, struct sigaltstack *__restrict __oss"
},
{
  "method_name" : "sighold",
  "return_value" : "int",
  "arguments" : "int __sig"
},
{
  "method_name" : "sigrelse",
  "return_value" : "int",
  "arguments" : "int __sig"
},
{
  "method_name" : "sigignore",
  "return_value" : "int",
  "arguments" : "int __sig"
},
{
  "method_name" : "sigset",
  "return_value" : "__sighandler_t",
  "arguments" : "int __sig, __sighandler_t __disp"
},
{
  "method_name" : "__libc_current_sigrtmin",
  "return_value" : "int",
  "arguments" : "void"
},
{
  "method_name" : "__libc_current_sigrtmax",
  "return_value" : "int",
  "arguments" : "void"
}]