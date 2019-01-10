//
//  main.cpp
//  AtCoderABC088BCardGameForTwo
//
//  Created by osu on 2019/01/03.
//  Copyright © 2019 osu. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, const char * argv[]) {
    int N(0);
    std::cin >> N;

    std::vector<int> a(N);
    for(int i=0; i<N; i++) {
        std::cin >> a[i];
    }

    std::sort(a.begin(), a.end(), std::greater<int>());
    int alice(0), bob(0);
    for(int i=0; i<N; i++) {
        if(i%2==0) {
            alice += a[i];
        } else {
            bob += a[i];
        }
    }

    std::cout << alice - bob;

    return 0;
}
