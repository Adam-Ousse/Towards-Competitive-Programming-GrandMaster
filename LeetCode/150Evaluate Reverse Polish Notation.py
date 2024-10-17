def evalRPN(tokens) :
        stack = []
        tokens = tokens[:]
        operators = ["+","-","*","/"]
        while(tokens):
            elem = tokens.pop(0)
            if elem not in operators : 
                stack.append(elem)
            else:
                elem_1 = stack.pop()
                elem_2 = stack.pop()
                stack.append(str(int(eval(elem_2+elem+elem_1))))
        return stack[-1]
    
test = ["10","6","9","3","+","-11","*","/","*","17","+","5","+"]

print(evalRPN(test))