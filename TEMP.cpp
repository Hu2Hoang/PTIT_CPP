    int l, r;
    cin >> l >> r;
    while (l <= r && a[l] <= a[l + 1])
        l++;
    l++;
    while (l <= r && a[l] <= a[l - 1])
        l++;
    (l > r) ? cout << "Yes\n" : cout << "No\n";
}
