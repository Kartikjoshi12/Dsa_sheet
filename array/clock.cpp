string timeConversion(string s) {
    string meridian = s.substr(8, 2);   
    string hh = s.substr(0, 2);         
    string mm = s.substr(3, 2);        
    string ss = s.substr(6, 2);         

    int hour = stoi(hh);                

    if (meridian == "AM") {
        if (hour == 12) {             
            hour = 0;
        }
    } else { // PM
        if (hour != 12) {              
            hour += 12;                 
        }
    }

 
    stringstream ssf;
    ssf << setfill('0') << setw(2) << hour << ":" << mm << ":" << ss;

    return ssf.str();
}