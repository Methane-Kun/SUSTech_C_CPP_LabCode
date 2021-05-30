#include <iostream>
#include "tv.h"

int main() {
    using std::cout;
    Tv s42;
    Remote grey;
    cout << "Initial settings for 42\" TV:\n";
    s42.settings();
    grey.remote(s42.ison());

    cout << "\nAdjusted settings for 42\" TV:\n";
    s42.onoff();
    s42.chanup();
    s42.settings();
    grey.onoff();
    cout<<"After toggling the Remote state: \n";
    grey.remote(s42.ison());

    return 0;
}
