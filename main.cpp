#include <iostream>
#include <string>
#include <sstream> // for task 3
using namespace std;

/*
TASK 1 ( Частина 2 )
int main() {
    string input;

    cout << "write: ";
    getline(cin, input);

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ') {
            input[i] = '\t';
        }
    }

    cout << "after: " << endl;
    cout << input << endl;

    return 0;
}
 TASK 2
int main() {
    string input;
    int letter = 0, digit = 0, other = 0;

    cout << "write: ";
    getline(cin, input);

    for (int i = 0; i < input.length(); i++) {
        if (isalpha(input[i])) {
            letter++;
        }
        else if (isdigit(input[i])) {
            digit++; 
        }
        else {
            other++;
        }
    }

    cout << "count of letters: " << letter << endl;
    cout << "count of digits: " << digit << endl;
    cout << "another: " << other << endl;

    return 0;
}
TASK 3
int main() {
    string input;
    int wordCount = 0;

    cout << "write: ";
    getline(cin, input);

    istringstream stream(input);
    string word;

    while (stream >> word) {
        wordCount++;
    }

    cout << "count: " << wordCount << endl;

    return 0;
}
Частина 1 !!!!!! 
TASK 1 part 1
string remove(string str, int index) {
    if (index >= 0 && index < str.length()) {
        str.erase(index, 1);
    }
    return str;
}

int main() {
    string input;
    int index;

    cout << "write: ";
    getline(cin, input);

    cout << "index for delete: ";
    cin >> index;

    string result = remove(input, index);

    cout << "string after: " << result << endl;

    return 0;
} 
Task 3 part 1
string insert(string str, char ch, int index) {
    if (index >= 0 && index <= str.length()) {
        str.insert(str.begin() + index, ch);
    }
    return str;
}

int main() {
    string input;
    char ch;
    int index;

    cout << "write string: ";
    getline(cin, input);

    cout << "put what u want: ";
    cin >> ch;

    cout << "write index: ";
    cin >> index;

    string result = insert(input, ch, index);

    cout << "string after: " << result << endl;

    return 0;
}
Task 4 part 1
int main() {
    string input;

    cout << "write string: ";
    getline(cin, input);

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '.') {
            input[i] = '!';
        }
    }

    cout << "string after: " << input << endl;

    return 0;
}
Task 5 part 1
int main() {
    string input;
    char ch;
    int count = 0;


    cout << "write string: ";
    getline(cin, input);

    cout << "searched letter/symbol: ";
    cin >> ch;

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ch) {
            count++;
        }
    }

    cout << "symbol '" << ch << "' met " << count << " times in string" << endl;

    return 0;
} 
Task 6 past 1*/

int main() {
    string input;
    int letters = 0, digits = 0, others = 0;

    cout << "write string: ";
    getline(cin, input);

    for (char ch : input) {
        if (isalpha(ch)) {
            letters++;
        }
        else if (isdigit(ch)) {
            digits++;
        }
        else {
            others++;
        }
    }

    cout << "letters: " << letters << endl;
    cout << "digits: " << digits << endl;
    cout << "another things: " << others << endl;

    return 0;
}