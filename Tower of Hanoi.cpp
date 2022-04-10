void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if(n<1)
        return;
    else{
        towerOfHanoi(n-1, source, destination, auxiliary);
        cout << source << ' ' << destination << endl;
        towerOfHanoi(n-1, auxiliary, source, destination);
    }
}
