// excerpts from http://code.google.com/p/muduo/
//
// Use of this source code is governed by a BSD-style license
// that can be found in the License file.
//
// Author: Shuo Chen (chenshuo at chenshuo dot com)

#ifndef MUDUO_NET_EVENTLOOPTHREAD_H
#define MUDUO_NET_EVENTLOOPTHREAD_H

#include "../../base/Condition.h"
#include "../../base/Mutex.h"
#include "../../base/Thread.h"
#include "../../base/noncopyable.h"

#include <boost/noncopyable.hpp>

namespace muduo
{

class EventLoop;

class EventLoopThread : noncopyable
{
 public:
  EventLoopThread();
  ~EventLoopThread();
  EventLoop* startLoop();

 private:
  void threadFunc();

  EventLoop* loop_;
  bool exiting_;
  Thread thread_;
  MutexLock mutex_;
  Condition cond_;
};

}

#endif  // MUDUO_NET_EVENTLOOPTHREAD_H

