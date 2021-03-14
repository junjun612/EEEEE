//
//  Assert.h
//  EEEEE
//
//  Created by 김민준 on 2021/03/14.
//

#ifndef Assert_h
#define Assert_h

#include <cassert>

#define va_assert(cond, ret, msg)   \
    if(!cond)                       \
    {                               \
        assert(cond && msg);        \
        return ret;                 \
    }

#define va_assert_x(cond, msg)      \
    if(!cond)                       \
    {                               \
        assert(cond && msg);        \
        return;                     \
    }

#endif /* Assert_h */
