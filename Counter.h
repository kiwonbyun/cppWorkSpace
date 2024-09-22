#ifndef COUNTER_H_INCLUDED
#define COUNTER_H_INCLUDED

class Counter{
    int value;

    public:
        Counter () : value{0} {}
        ~Counter () {
            // 정리작업
        }

        void reset() {
            value = 0;
        }

        void count() {
            ++value;
        }

        int getValue() const {
            return value;
        }
};

#endif