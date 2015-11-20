[{
  "method_name" : "pthread_create",
  "return_value" : "int",
  "arguments" : "pthread_t *__restrict __newthread, const pthread_attr_t *__restrict __attr, void *(*__start_routine) (void *), void *__restrict __arg"
},
{
  "method_name" : "pthread_exit",
  "return_value" : "void",
  "arguments" : "void *__retval"
},
{
  "method_name" : "pthread_join",
  "return_value" : "int",
  "arguments" : "pthread_t __th, void **__thread_return"
},
{
  "method_name" : "pthread_tryjoin_np",
  "return_value" : "int",
  "arguments" : "pthread_t __th, void **__thread_return"
},
{
  "method_name" : "pthread_timedjoin_np",
  "return_value" : "int",
  "arguments" : "pthread_t __th, void **__thread_return, const struct timespec *__abstime"
},
{
  "method_name" : "pthread_detach",
  "return_value" : "int",
  "arguments" : "pthread_t __th"
},
{
  "method_name" : "pthread_self",
  "return_value" : "pthread_t",
  "arguments" : "void"
},
{
  "method_name" : "pthread_equal",
  "return_value" : "int",
  "arguments" : "pthread_t __thread1, pthread_t __thread2"
},
{
  "method_name" : "pthread_attr_init",
  "return_value" : "int",
  "arguments" : "pthread_attr_t *__attr"
},
{
  "method_name" : "pthread_attr_destroy",
  "return_value" : "int",
  "arguments" : "pthread_attr_t *__attr"
},
{
  "method_name" : "pthread_attr_getdetachstate",
  "return_value" : "int",
  "arguments" : "const pthread_attr_t *__attr, int *__detachstate"
},
{
  "method_name" : "pthread_attr_setdetachstate",
  "return_value" : "int",
  "arguments" : "pthread_attr_t *__attr, int __detachstate"
},
{
  "method_name" : "pthread_attr_getguardsize",
  "return_value" : "int",
  "arguments" : "const pthread_attr_t *__attr, size_t *__guardsize"
},
{
  "method_name" : "pthread_attr_setguardsize",
  "return_value" : "int",
  "arguments" : "pthread_attr_t *__attr, size_t __guardsize"
},
{
  "method_name" : "pthread_attr_getschedparam",
  "return_value" : "int",
  "arguments" : "const pthread_attr_t *__restrict __attr, struct sched_param *__restrict __param"
},
{
  "method_name" : "pthread_attr_setschedparam",
  "return_value" : "int",
  "arguments" : "pthread_attr_t *__restrict __attr, const struct sched_param *__restrict __param"
},
{
  "method_name" : "pthread_attr_getschedpolicy",
  "return_value" : "int",
  "arguments" : "const pthread_attr_t *__restrict __attr, int *__restrict __policy"
},
{
  "method_name" : "pthread_attr_setschedpolicy",
  "return_value" : "int",
  "arguments" : "pthread_attr_t *__attr, int __policy"
},
{
  "method_name" : "pthread_attr_getinheritsched",
  "return_value" : "int",
  "arguments" : "const pthread_attr_t *__restrict __attr, int *__restrict __inherit"
},
{
  "method_name" : "pthread_attr_setinheritsched",
  "return_value" : "int",
  "arguments" : "pthread_attr_t *__attr, int __inherit"
},
{
  "method_name" : "pthread_attr_getscope",
  "return_value" : "int",
  "arguments" : "const pthread_attr_t *__restrict __attr, int *__restrict __scope"
},
{
  "method_name" : "pthread_attr_setscope",
  "return_value" : "int",
  "arguments" : "pthread_attr_t *__attr, int __scope"
},
{
  "method_name" : "pthread_attr_getstackaddr",
  "return_value" : "int",
  "arguments" : "const pthread_attr_t *__restrict __attr, void **__restrict __stackaddr"
},
{
  "method_name" : "pthread_attr_setstackaddr",
  "return_value" : "int",
  "arguments" : "pthread_attr_t *__attr, void *__stackaddr"
},
{
  "method_name" : "pthread_attr_getstacksize",
  "return_value" : "int",
  "arguments" : "const pthread_attr_t *__restrict __attr, size_t *__restrict __stacksize"
},
{
  "method_name" : "pthread_attr_setstacksize",
  "return_value" : "int",
  "arguments" : "pthread_attr_t *__attr, size_t __stacksize"
},
{
  "method_name" : "pthread_attr_getstack",
  "return_value" : "int",
  "arguments" : "const pthread_attr_t *__restrict __attr, void **__restrict __stackaddr, size_t *__restrict __stacksize"
},
{
  "method_name" : "pthread_attr_setstack",
  "return_value" : "int",
  "arguments" : "pthread_attr_t *__attr, void *__stackaddr, size_t __stacksize"
},
{
  "method_name" : "pthread_attr_setaffinity_np",
  "return_value" : "int",
  "arguments" : "pthread_attr_t *__attr, size_t __cpusetsize, const cpu_set_t *__cpuset"
},
{
  "method_name" : "pthread_attr_getaffinity_np",
  "return_value" : "int",
  "arguments" : "const pthread_attr_t *__attr, size_t __cpusetsize, cpu_set_t *__cpuset"
},
{
  "method_name" : "pthread_getattr_default_np",
  "return_value" : "int",
  "arguments" : "pthread_attr_t *__attr"
},
{
  "method_name" : "pthread_setattr_default_np",
  "return_value" : "int",
  "arguments" : "const pthread_attr_t *__attr"
},
{
  "method_name" : "pthread_getattr_np",
  "return_value" : "int",
  "arguments" : "pthread_t __th, pthread_attr_t *__attr"
},
{
  "method_name" : "pthread_setschedparam",
  "return_value" : "int",
  "arguments" : "pthread_t __target_thread, int __policy, const struct sched_param *__param"
},
{
  "method_name" : "pthread_getschedparam",
  "return_value" : "int",
  "arguments" : "pthread_t __target_thread, int *__restrict __policy, struct sched_param *__restrict __param"
},
{
  "method_name" : "pthread_setschedprio",
  "return_value" : "int",
  "arguments" : "pthread_t __target_thread, int __prio"
},
{
  "method_name" : "pthread_getname_np",
  "return_value" : "int",
  "arguments" : "pthread_t __target_thread, char *__buf, size_t __buflen"
},
{
  "method_name" : "pthread_setname_np",
  "return_value" : "int",
  "arguments" : "pthread_t __target_thread, const char *__name"
},
{
  "method_name" : "pthread_getconcurrency",
  "return_value" : "int",
  "arguments" : "void"
},
{
  "method_name" : "pthread_setconcurrency",
  "return_value" : "int",
  "arguments" : "int __level"
},
{
  "method_name" : "pthread_yield",
  "return_value" : "int",
  "arguments" : "void"
},
{
  "method_name" : "pthread_setaffinity_np",
  "return_value" : "int",
  "arguments" : "pthread_t __th, size_t __cpusetsize, const cpu_set_t *__cpuset"
},
{
  "method_name" : "pthread_getaffinity_np",
  "return_value" : "int",
  "arguments" : "pthread_t __th, size_t __cpusetsize, cpu_set_t *__cpuset"
},
{
  "method_name" : "pthread_once",
  "return_value" : "int",
  "arguments" : "pthread_once_t *__once_control, void (*__init_routine) (void)"
},
{
  "method_name" : "pthread_setcancelstate",
  "return_value" : "int",
  "arguments" : "int __state, int *__oldstate"
},
{
  "method_name" : "pthread_setcanceltype",
  "return_value" : "int",
  "arguments" : "int __type, int *__oldtype"
},
{
  "method_name" : "pthread_cancel",
  "return_value" : "int",
  "arguments" : "pthread_t __th"
},
{
  "method_name" : "pthread_testcancel",
  "return_value" : "void",
  "arguments" : "void"
},
{
  "method_name" : "__pthread_cleanup_routine",
  "return_value" : "void",
  "arguments" : "struct __pthread_cleanup_frame *__frame"
},
{
  "method_name" : "__pthread_register_cancel",
  "return_value" : "void",
  "arguments" : "__pthread_unwind_buf_t *__buf"
},
{
  "method_name" : "__pthread_unregister_cancel",
  "return_value" : "void",
  "arguments" : "__pthread_unwind_buf_t *__buf"
},
{
  "method_name" : "__pthread_register_cancel_defer",
  "return_value" : "void",
  "arguments" : "__pthread_unwind_buf_t *__buf"
},
{
  "method_name" : "__pthread_unregister_cancel_restore",
  "return_value" : "void",
  "arguments" : "__pthread_unwind_buf_t *__buf"
},
{
  "method_name" : "__pthread_unwind_next",
  "return_value" : "void",
  "arguments" : "__pthread_unwind_buf_t *__buf"
},
{
  "method_name" : "__sigsetjmp",
  "return_value" : "int",
  "arguments" : "struct __jmp_buf_tag *__env, int __savemask"
},
{
  "method_name" : "pthread_mutex_init",
  "return_value" : "int",
  "arguments" : "pthread_mutex_t *__mutex, const pthread_mutexattr_t *__mutexattr"
},
{
  "method_name" : "pthread_mutex_destroy",
  "return_value" : "int",
  "arguments" : "pthread_mutex_t *__mutex"
},
{
  "method_name" : "pthread_mutex_trylock",
  "return_value" : "int",
  "arguments" : "pthread_mutex_t *__mutex"
},
{
  "method_name" : "pthread_mutex_lock",
  "return_value" : "int",
  "arguments" : "pthread_mutex_t *__mutex"
},
{
  "method_name" : "pthread_mutex_timedlock",
  "return_value" : "int",
  "arguments" : "pthread_mutex_t *__restrict __mutex, const struct timespec *__restrict __abstime"
},
{
  "method_name" : "pthread_mutex_unlock",
  "return_value" : "int",
  "arguments" : "pthread_mutex_t *__mutex"
},
{
  "method_name" : "pthread_mutex_getprioceiling",
  "return_value" : "int",
  "arguments" : "const pthread_mutex_t * __restrict __mutex, int *__restrict __prioceiling"
},
{
  "method_name" : "pthread_mutex_setprioceiling",
  "return_value" : "int",
  "arguments" : "pthread_mutex_t *__restrict __mutex, int __prioceiling, int *__restrict __old_ceiling"
},
{
  "method_name" : "pthread_mutex_consistent",
  "return_value" : "int",
  "arguments" : "pthread_mutex_t *__mutex"
},
{
  "method_name" : "pthread_mutex_consistent_np",
  "return_value" : "int",
  "arguments" : "pthread_mutex_t *__mutex"
},
{
  "method_name" : "pthread_mutexattr_init",
  "return_value" : "int",
  "arguments" : "pthread_mutexattr_t *__attr"
},
{
  "method_name" : "pthread_mutexattr_destroy",
  "return_value" : "int",
  "arguments" : "pthread_mutexattr_t *__attr"
},
{
  "method_name" : "pthread_mutexattr_getpshared",
  "return_value" : "int",
  "arguments" : "const pthread_mutexattr_t * __restrict __attr, int *__restrict __pshared"
},
{
  "method_name" : "pthread_mutexattr_setpshared",
  "return_value" : "int",
  "arguments" : "pthread_mutexattr_t *__attr, int __pshared"
},
{
  "method_name" : "pthread_mutexattr_gettype",
  "return_value" : "int",
  "arguments" : "const pthread_mutexattr_t *__restrict __attr, int *__restrict __kind"
},
{
  "method_name" : "pthread_mutexattr_settype",
  "return_value" : "int",
  "arguments" : "pthread_mutexattr_t *__attr, int __kind"
},
{
  "method_name" : "pthread_mutexattr_getprotocol",
  "return_value" : "int",
  "arguments" : "const pthread_mutexattr_t * __restrict __attr, int *__restrict __protocol"
},
{
  "method_name" : "pthread_mutexattr_setprotocol",
  "return_value" : "int",
  "arguments" : "pthread_mutexattr_t *__attr, int __protocol"
},
{
  "method_name" : "pthread_mutexattr_getprioceiling",
  "return_value" : "int",
  "arguments" : "const pthread_mutexattr_t * __restrict __attr, int *__restrict __prioceiling"
},
{
  "method_name" : "pthread_mutexattr_setprioceiling",
  "return_value" : "int",
  "arguments" : "pthread_mutexattr_t *__attr, int __prioceiling"
},
{
  "method_name" : "pthread_mutexattr_getrobust",
  "return_value" : "int",
  "arguments" : "const pthread_mutexattr_t *__attr, int *__robustness"
},
{
  "method_name" : "pthread_mutexattr_getrobust_np",
  "return_value" : "int",
  "arguments" : "const pthread_mutexattr_t *__attr, int *__robustness"
},
{
  "method_name" : "pthread_mutexattr_setrobust",
  "return_value" : "int",
  "arguments" : "pthread_mutexattr_t *__attr, int __robustness"
},
{
  "method_name" : "pthread_mutexattr_setrobust_np",
  "return_value" : "int",
  "arguments" : "pthread_mutexattr_t *__attr, int __robustness"
},
{
  "method_name" : "pthread_rwlock_init",
  "return_value" : "int",
  "arguments" : "pthread_rwlock_t *__restrict __rwlock, const pthread_rwlockattr_t *__restrict __attr"
},
{
  "method_name" : "pthread_rwlock_destroy",
  "return_value" : "int",
  "arguments" : "pthread_rwlock_t *__rwlock"
},
{
  "method_name" : "pthread_rwlock_rdlock",
  "return_value" : "int",
  "arguments" : "pthread_rwlock_t *__rwlock"
},
{
  "method_name" : "pthread_rwlock_tryrdlock",
  "return_value" : "int",
  "arguments" : "pthread_rwlock_t *__rwlock"
},
{
  "method_name" : "pthread_rwlock_timedrdlock",
  "return_value" : "int",
  "arguments" : "pthread_rwlock_t *__restrict __rwlock, const struct timespec *__restrict __abstime"
},
{
  "method_name" : "pthread_rwlock_wrlock",
  "return_value" : "int",
  "arguments" : "pthread_rwlock_t *__rwlock"
},
{
  "method_name" : "pthread_rwlock_trywrlock",
  "return_value" : "int",
  "arguments" : "pthread_rwlock_t *__rwlock"
},
{
  "method_name" : "pthread_rwlock_timedwrlock",
  "return_value" : "int",
  "arguments" : "pthread_rwlock_t *__restrict __rwlock, const struct timespec *__restrict __abstime"
},
{
  "method_name" : "pthread_rwlock_unlock",
  "return_value" : "int",
  "arguments" : "pthread_rwlock_t *__rwlock"
},
{
  "method_name" : "pthread_rwlockattr_init",
  "return_value" : "int",
  "arguments" : "pthread_rwlockattr_t *__attr"
},
{
  "method_name" : "pthread_rwlockattr_destroy",
  "return_value" : "int",
  "arguments" : "pthread_rwlockattr_t *__attr"
},
{
  "method_name" : "pthread_rwlockattr_getpshared",
  "return_value" : "int",
  "arguments" : "const pthread_rwlockattr_t * __restrict __attr, int *__restrict __pshared"
},
{
  "method_name" : "pthread_rwlockattr_setpshared",
  "return_value" : "int",
  "arguments" : "pthread_rwlockattr_t *__attr, int __pshared"
},
{
  "method_name" : "pthread_rwlockattr_getkind_np",
  "return_value" : "int",
  "arguments" : "const pthread_rwlockattr_t * __restrict __attr, int *__restrict __pref"
},
{
  "method_name" : "pthread_rwlockattr_setkind_np",
  "return_value" : "int",
  "arguments" : "pthread_rwlockattr_t *__attr, int __pref"
},
{
  "method_name" : "pthread_cond_init",
  "return_value" : "int",
  "arguments" : "pthread_cond_t *__restrict __cond, const pthread_condattr_t *__restrict __cond_attr"
},
{
  "method_name" : "pthread_cond_destroy",
  "return_value" : "int",
  "arguments" : "pthread_cond_t *__cond"
},
{
  "method_name" : "pthread_cond_signal",
  "return_value" : "int",
  "arguments" : "pthread_cond_t *__cond"
},
{
  "method_name" : "pthread_cond_broadcast",
  "return_value" : "int",
  "arguments" : "pthread_cond_t *__cond"
},
{
  "method_name" : "pthread_cond_wait",
  "return_value" : "int",
  "arguments" : "pthread_cond_t *__restrict __cond, pthread_mutex_t *__restrict __mutex"
},
{
  "method_name" : "pthread_cond_timedwait",
  "return_value" : "int",
  "arguments" : "pthread_cond_t *__restrict __cond, pthread_mutex_t *__restrict __mutex, const struct timespec *__restrict __abstime"
},
{
  "method_name" : "pthread_condattr_init",
  "return_value" : "int",
  "arguments" : "pthread_condattr_t *__attr"
},
{
  "method_name" : "pthread_condattr_destroy",
  "return_value" : "int",
  "arguments" : "pthread_condattr_t *__attr"
},
{
  "method_name" : "pthread_condattr_getpshared",
  "return_value" : "int",
  "arguments" : "const pthread_condattr_t * __restrict __attr, int *__restrict __pshared"
},
{
  "method_name" : "pthread_condattr_setpshared",
  "return_value" : "int",
  "arguments" : "pthread_condattr_t *__attr, int __pshared"
},
{
  "method_name" : "pthread_condattr_getclock",
  "return_value" : "int",
  "arguments" : "const pthread_condattr_t * __restrict __attr, __clockid_t *__restrict __clock_id"
},
{
  "method_name" : "pthread_condattr_setclock",
  "return_value" : "int",
  "arguments" : "pthread_condattr_t *__attr, __clockid_t __clock_id"
},
{
  "method_name" : "pthread_spin_init",
  "return_value" : "int",
  "arguments" : "pthread_spinlock_t *__lock, int __pshared"
},
{
  "method_name" : "pthread_spin_destroy",
  "return_value" : "int",
  "arguments" : "pthread_spinlock_t *__lock"
},
{
  "method_name" : "pthread_spin_lock",
  "return_value" : "int",
  "arguments" : "pthread_spinlock_t *__lock"
},
{
  "method_name" : "pthread_spin_trylock",
  "return_value" : "int",
  "arguments" : "pthread_spinlock_t *__lock"
},
{
  "method_name" : "pthread_spin_unlock",
  "return_value" : "int",
  "arguments" : "pthread_spinlock_t *__lock"
},
{
  "method_name" : "pthread_barrier_init",
  "return_value" : "int",
  "arguments" : "pthread_barrier_t *__restrict __barrier, const pthread_barrierattr_t *__restrict __attr, unsigned int __count"
},
{
  "method_name" : "pthread_barrier_destroy",
  "return_value" : "int",
  "arguments" : "pthread_barrier_t *__barrier"
},
{
  "method_name" : "pthread_barrier_wait",
  "return_value" : "int",
  "arguments" : "pthread_barrier_t *__barrier"
},
{
  "method_name" : "pthread_barrierattr_init",
  "return_value" : "int",
  "arguments" : "pthread_barrierattr_t *__attr"
},
{
  "method_name" : "pthread_barrierattr_destroy",
  "return_value" : "int",
  "arguments" : "pthread_barrierattr_t *__attr"
},
{
  "method_name" : "pthread_barrierattr_getpshared",
  "return_value" : "int",
  "arguments" : "const pthread_barrierattr_t * __restrict __attr, int *__restrict __pshared"
},
{
  "method_name" : "pthread_barrierattr_setpshared",
  "return_value" : "int",
  "arguments" : "pthread_barrierattr_t *__attr, int __pshared"
},
{
  "method_name" : "pthread_key_create",
  "return_value" : "int",
  "arguments" : "pthread_key_t *__key, void (*__destr_function) (void *)"
},
{
  "method_name" : "pthread_key_delete",
  "return_value" : "int",
  "arguments" : "pthread_key_t __key"
},
{
  "method_name" : "pthread_getspecific",
  "return_value" : "void*",
  "arguments" : "pthread_key_t __key"
},
{
  "method_name" : "pthread_setspecific",
  "return_value" : "int",
  "arguments" : "pthread_key_t __key, const void *__pointer"
},
{
  "method_name" : "pthread_getcpuclockid",
  "return_value" : "int",
  "arguments" : "pthread_t __thread_id, __clockid_t *__clock_id"
},
{
  "method_name" : "pthread_atfork",
  "return_value" : "int",
  "arguments" : "void (*__prepare) (void), void (*__parent) (void), void (*__child) (void)"
},
{
  "method_name" : "__NTH",
  "return_value" : "int",
  "arguments" : "pthread_equal (pthread_t __thread1, pthread_t __thread2)"
}]