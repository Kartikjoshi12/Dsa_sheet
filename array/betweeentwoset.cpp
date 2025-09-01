
    int l = a[0];
    for (int i = 1; i < a.size(); i++) {
        l = lcm(l, a[i]);
    }

  
    int g = b[0];
    for (int i = 1; i < b.size(); i++) {
        g = gcd(g, b[i]);   
    }

    int count = 0;
    for (int x = l; x <= g; x += l) {
        if (g % x == 0) count++;
    }

    return count;