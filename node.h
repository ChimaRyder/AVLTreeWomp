struct node {
    node* parent;
    node* right;
    node* left;
    int elem;

    // TODO paste your height method here
    int height() {
        if (!right && !left) {
            return 1;
        }

        int righth = 0, lefth = 0;
        if (right) {
            righth = right->height();
        }
        if (left) {
            lefth = left->height();
        }

        if (righth > lefth) {
            return righth + 1;
        } else {
            return lefth + 1;
        }
    }
};
