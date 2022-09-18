class Wheel{
    public:
        Wheel(int dir_pin1, int dir_pin2);

        int dir_pin1;
        int dir_pin2;

        void start(bool direction);

        void stop();
};