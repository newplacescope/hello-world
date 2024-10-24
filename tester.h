#ifndef _TESTER_H_
#define _TESTER_H_

class CTester{
    CTester();
public:
    static CTester getInstance();
    static void releaseInstance();
    run();

private:
    static CTester s_tester;
    void* ptr;
};

#endif

