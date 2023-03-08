enum Operation {
    ADD,
    SUBTRACT,
    MULTIPLY,
    DIVIDE,
    SQRT,
    PERCENT,
    EQUALS,
    CLEAR
};

struct Action {
    Operation type;
    double payload;
};

double calculate(Action action, double current) {
    switch (action.type) {
        case ADD:
            return current + action.payload;
        case SUBTRACT:
            return current - action.payload;
        case MULTIPLY:
            return current * action.payload;
        case DIVIDE:
            return current / action.payload;
        // case SQRT:
        //     return root(current); // TODO: include implementation of root
        case PERCENT:
            return current / 100;
        case EQUALS:
            return action.payload;
        case CLEAR:
            return 0;
    }
}