FROM japeto/pujgcc:latest

WORKDIR /app

COPY . .

RUN g++ main.cpp \
    punteroVariable.cpp \
    stackDemo.cpp \
    CodeDemo.cpp \
    heapDemo.cpp \
    arreglosEnteros.cpp \
    matrizDinamica.cpp \
    variableEntera.cpp \
    -o programa

CMD ["./programa"]