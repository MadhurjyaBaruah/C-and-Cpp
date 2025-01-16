#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Output.H>
#include <string>

// Function declarations
void button_clicked(Fl_Widget* widget, void* data);
void calculate(Fl_Widget* widget, void* data);

// Global variable to hold the expression
std::string expression = "";

int main(int argc, char** argv) {
    Fl_Window* window = new Fl_Window(300, 300, "Simple Calculator");

    Fl_Output* output = new Fl_Output(20, 20, 260, 40, "Output");
    output->align(FL_ALIGN_CENTER | FL_ALIGN_INSIDE);

    // Create number and operator buttons
    const char* buttons[] = {
        "7", "8", "9", "/",
        "4", "5", "6", "*",
        "1", "2", "3", "-",
        "0", ".", "=", "+"
    };

    const int numButtons = 16;
    const int buttonWidth = 50;
    const int buttonHeight = 50;
    const int buttonSpacing = 10;
    const int startX = 20;
    const int startY = 80;

    for (int i = 0; i < numButtons; ++i) {
        Fl_Button* button = new Fl_Button(startX + (buttonWidth + buttonSpacing) * (i % 4),
                                           startY + (buttonHeight + buttonSpacing) * (i / 4),
                                           buttonWidth, buttonHeight, buttons[i]);

        button->callback(button_clicked);
    }

    window->end();
    window->show(argc, argv);

    return Fl::run();
}

void button_clicked(Fl_Widget* widget, void* data) {
    Fl_Button* button = dynamic_cast<Fl_Button*>(widget);
    const char* label = button->label();

    if (std::string(label) == "=") {
        calculate(widget, data);
    } else {
        expression += label;
        Fl_Output* output = static_cast<Fl_Output*>(data);
        output->value(expression.c_str());
    }
}


void calculate(Fl_Widget* widget, void* data) {
    Fl_Output* output = static_cast<Fl_Output*>(data);
    std::string result = std::to_string(eval_expression(expression));
    output->value(result.c_str());
    expression = "";
}

// Function to evaluate the expression
double eval_expression(const std::string& expression) {
    // You need to implement your expression evaluation logic here
    // This function should take the expression string,
    // parse it, and evaluate the result
    // For simplicity, you can use the eval() function from math.h to evaluate expressions

    return 0.0; // Placeholder return value
}

