class Date {    
    private:
        int _month;
        int _day;
    public:
        Date(int month, int day);
        int month() const;
        int day() const;
};
