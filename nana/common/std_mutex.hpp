#ifndef NANA_STD_MUTEX_HPP
#define NANA_STD_MUTEX_HPP
#include "nana/common/config.hpp"

#if defined(STD_THREAD_NOT_SUPPORTED)

#if defined(NANA_ENABLE_MINGW_STD_THREADS_WITH_MEGANZ)
#include <condition_variable>
#include <mutex>
#include <windows.h>
// #include <thread>
// #include <pthread.h>
#include <cstdio>
#include <errno.h>
// http://lxr.free-electrons.com/source/include/uapi/asm-generic/errno.h#L53
// #define EPROTO          71      /* Protocol error */
#ifdef _GLIBCXX_HAS_GTHREADS
#include <thread>
#else
#include <mingw.mutex.h>
#include <mingw.thread.h>
#endif
#else
#include <boost/thread/locks.hpp>
#include <boost/thread/mutex.hpp>
#include <boost/thread/recursive_mutex.hpp>

namespace std {
template <typename Mutex> using lock_guard = boost::lock_guard<Mutex>;

template <typename Mutex> using unique_lock = boost::unique_lock<Mutex>;

typedef boost::mutex mutex;
typedef boost::recursive_mutex recursive_mutex;
} // namespace std
#endif // (NANA_ENABLE_MINGW_STD_THREADS_WITH_MEGANZ)
#endif // (STD_THREAD_NOT_SUPPORTED)
#endif // NANA_STD_MUTEX_HPP
