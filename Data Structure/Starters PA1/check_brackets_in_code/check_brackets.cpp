#include <iostream>
#include <stack>
#include <string>

struct Bracket {
    Bracket(char type, int position):
        type(type),
        position(position)
    {}

    bool Matchc(char c) {
        if (type == '[' && c == ']')
            return true;
        if (type == '{' && c == '}')
            return true;
        if (type == '(' && c == ')')
            return true;
        return false;
    }

    char type;
    int position;
};
int checker(std::string text)
{
    std::stack <Bracket> opening_brackets_stack;
    for (int position = 0; position < text.length(); ++position) {
        char next = text[position];

        if (next == '(' || next == '[' || next == '{') {
            // Process opening bracket, write your code here
            opening_brackets_stack.push (Bracket (next, position));
        }

        else if (next == ')' || next == ']' || next == '}') {
            // Process closing bracket, write your code here
            if(opening_brackets_stack.empty())
            {
                return position;
            }
            Bracket top = opening_brackets_stack.top();
            opening_brackets_stack.pop();
            if(!top.Matchc(next))
            {
                return position;
            }
        }

    }
     if (!opening_brackets_stack.empty())
        {
            Bracket top = opening_brackets_stack.top();
            opening_brackets_stack.pop();
            return top.position;
        }
    return -1;

}
int main() {
    std::string text;
    getline(std::cin, text);
    int val = checker(text);
    if( val == -1)
    std::cout<<"Success";
    else
        std::cout<<val+1;

    // Printing answer, write your code here

    return 0;
}
