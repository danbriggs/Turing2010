bool configin (char*, int, config&);
void configout (config);
void configout2 (config&);
void configout3 (config&);
void funkyconfigout (config);
void forthyconfigout (config);
void firstyconfigout (config&);
bool runwithfunkyoutput (machine, int, int, int);
bool runwithforthyoutput (machine, long long, int, long long);
bool runwithfirstyoutput (machine, long long, int, long long, int, int);
bool runwithfirstyoutput (machine, long long, int, long long, int, int, config&, tape&);
bool runwithteenthyoutput (machine, long long, int, long long, int, int);
bool runwithteenthyoutput (machine, long long, int, long long, int, int, config&, tape&);
bool runwithawesomeoutput (machine, long long, long long, long long, int);
bool runwithawesomeoutput (machine, long long, long long, long long, int, config&, tape &);
bool runwithhackneyedoutput (machine, long long, long long, long long, int);
bool runwithhackneyedoutput (machine, long long, long long, long long, int, config&, tape &);