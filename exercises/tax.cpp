#include <iostream>
using namespace std;


int main() {
    const double state_tax_rate = .04;
    const double county_tax_rate = .02;

    double sales = 95000;
    double state = sales * state_tax_rate;
    double county = sales * county_tax_rate;
    double total = state + county;

    cout << "$" << sales << " worth of sales results in $" << state << " In state taxes and $" << county << " In county taxes!" << " After paying $" << total << " worth of taxes, you'll have $" << sales-total << " left over.";

    return 0;
}