
//Properties

//1- Execution always starts from main

//2- A function gets called directly or indirectly from main

//3- There can be multiple functions in a program.



//2nd pont explanation   function ne direct srif gm ko call kiya but indirectly ga and gn ko kia.

    void gm();
    void ga();
    void gn();

    int main() {
        gm();
        
        return 0;
    }

    void gm() {
        printf("good morning\n");
        ga();
        
    }

    void ga(){
        printf("good afternoon\n");
        
        gn();
    }

    void gn(){
        printf("good night\n");
    }
