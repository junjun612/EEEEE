//
//  Inline.h
//  EEEEE
//
//  Created by 김민준 on 2021/03/14.
//

#ifndef Inline_h
#define Inline_h

#ifdef __APPLE__
    #define FORCEINLINE inline
#else
    #define FORCEINLINE __forceinline
#endif

#endif /* Inline_h */
