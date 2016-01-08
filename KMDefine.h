//
//  KMDefine.h
//  test
//
//  Created by wei huachang on 16/1/8.
//  Copyright © 2016年 wei huachang. All rights reserved.
//

#ifndef KMDefine_h
#define KMDefine_h

#undef L
#define L(key) \
[[NSBundle mainBundle] localizedStringForKey:(key) value:@"",table:nil]

#endif /* KMDefine_h */
