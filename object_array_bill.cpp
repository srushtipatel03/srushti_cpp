#include<iostream>

using namespace std;
class GST
{
    double p,q,bill_ammount,gst,total_gst,net_bill;
    int num;

    public :

    GST()
    {
        cout << endl <<"|<------BILL With GST------>| " << endl;
        cout << "Number :--->";
        cin >> num;
        cout << "Enter Price :--->";
        cin >> p;
        cout << "Enter Quantity :--->";
        cin >> q;
        cout << "Enter Bill-Ammount :--->";
        cin >> bill_ammount;

        gst = (p * 18) / 100;
        total_gst = q * gst;
        net_bill = bill_ammount + total_gst;
        cout << "Gst is :--->" << gst << endl;
        cout << "Total Gst is :--->" << total_gst << endl;
        cout << "Net Bill is :--->" << net_bill << endl;
    }

    void setdata()
    {
        cout << num << "\t" << p << "\t" << q << "\t" << bill_ammount << "\t" <<  gst << "\t" << total_gst << "\t" << net_bill << "\t" << endl;
    }
};
int main()
{
    GST g[2];

    cout << endl <<"=================================================================" << endl;
    cout << "\t\t\t ---->|Bill With GST|<----" << endl ;
    cout << endl <<"=================================================================" << endl;
    cout << endl << "No.\t" << "Price\t" << "Quantity\t" << "Amno\t" << "GST\t" << "T-Gst\t" << "Netbill\t" << endl;
    cout << endl <<"=================================================================" << endl;

    for (int i = 0; i < 2; i++)
    {
        g[i].setdata();
    }
    cout << endl <<"=================================================================" << endl;
}