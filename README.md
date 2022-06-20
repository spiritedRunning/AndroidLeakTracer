# 使用说明

## leakLog.txt
#LeakTracer report diff_utc_mono=1631802901.123148
leak, time=3062.101101, stack=0x3c1e2 0x3b078 0x3af9c 0x3a308 0x29ad12de, size=1, data=.
leak, time=3062.100995, stack=0x3c1e2 0x3b078 0x3b29c 0x3a2f0 0x29ad12de, size=100, data=........TSYS....a.n.d.r.o.i.d...m.e.d.i.a...I.A.u.


执行
>./leak-analyze-addr2line libleaktracer.so leaks.log


```
Processing "leakLog.txt" log for "libleaktracer.so"
Matching addresses to "libleaktracer.so"
found 2 leak(s)
100 bytes lost in 1 blocks (one of them allocated at 3062.100995), from following call stack:
        E:\Project\AndroidStudioProjects\Test\AndroidLeakTracer\app\.cxx\cmake\debug\armeabi-v7a/E:\Project\AndroidStudioProjects\Test\AndroidLeakTin\cpp\libleaktracer\src\MemoryTrace.cpp:310
        E:\Project\AndroidStudioProjects\Test\AndroidLeakTracer\app\.cxx\cmake\debug\armeabi-v7a/E:/Project/AndroidStudioProjects/Test/AndroidLeakTin/cpp/libleaktracer/include/MemoryTrace.hpp:384
        E:\Project\AndroidStudioProjects\Test\AndroidLeakTracer\app\.cxx\cmake\debug\armeabi-v7a/E:\Project\AndroidStudioProjects\Test\AndroidLeakTin\cpp\libleaktracer\src\AllocationHandlers.cpp:77
        E:\Project\AndroidStudioProjects\Test\AndroidLeakTracer\app\.cxx\cmake\debug\armeabi-v7a/E:\Project\AndroidStudioProjects\Test\AndroidLeakTin\cpp\leaktracer_jni.cpp:54
        ??:0
1 bytes lost in 1 blocks (one of them allocated at 3062.101101), from following call stack:
        E:\Project\AndroidStudioProjects\Test\AndroidLeakTracer\app\.cxx\cmake\debug\armeabi-v7a/E:\Project\AndroidStudioProjects\Test\AndroidLeakTin\cpp\libleaktracer\src\MemoryTrace.cpp:310
        E:\Project\AndroidStudioProjects\Test\AndroidLeakTracer\app\.cxx\cmake\debug\armeabi-v7a/E:/Project/AndroidStudioProjects/Test/AndroidLeakTin/cpp/libleaktracer/include/MemoryTrace.hpp:384
        E:\Project\AndroidStudioProjects\Test\AndroidLeakTracer\app\.cxx\cmake\debug\armeabi-v7a/E:\Project\AndroidStudioProjects\Test\AndroidLeakTin\cpp\libleaktracer\src\AllocationHandlers.cpp:29
        E:\Project\AndroidStudioProjects\Test\AndroidLeakTracer\app\.cxx\cmake\debug\armeabi-v7a/E:\Project\AndroidStudioProjects\Test\AndroidLeakTin\cpp\leaktracer_jni.cpp:60
        ??:0
```
