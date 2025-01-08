void randomizer(char* input) { 
    size_t size(0);

    while(input[size] != '\0') {
        size++;
    }
    for (size_t i = size-1; i > 0; i--) {

        int x = rand() % (i + 1);

        char temp = input[i];
        input[i] = input[x];
        input[x] = temp;
    }
    cout << endl;
}