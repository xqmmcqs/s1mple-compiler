FROM adoptopenjdk/openjdk11:jre

SHELL ["/bin/bash", "-c"]

RUN apt-get update && \
    apt-get install -y --no-install-recommends \
    g++ \
    cmake \
    make \
    unzip \
    build-essential \
    pkg-config \
    uuid-dev \
    git \
    lsb-release \
    wget \
    software-properties-common \
    gpg-agent \
    zlib1g-dev 

RUN curl https://www.antlr.org/download/antlr-4.9.3-complete.jar -o /usr/local/lib/antlr-4.9.3-complete.jar && \
    echo -e "export CLASSPATH=\".:/usr/local/lib/antlr-4.9.3-complete.jar:\$CLASSPATH\"\nalias antlr4='java -Xmx500M -cp \"/usr/local/lib/antlr-4.9.3-complete.jar:\$CLASSPATH\" org.antlr.v4.Tool'\nalias grun='java -Xmx500M -cp \"/usr/local/lib/antlr-4.9.3-complete.jar:\$CLASSPATH\" org.antlr.v4.gui.TestRig'" >> ~/.bashrc && \
    source ~/.bashrc

WORKDIR /work/cpp/build

RUN curl https://www.antlr.org/download/antlr4-cpp-runtime-4.9.3-source.zip -o ../../antlr4-cpp-runtime-4.9.3-source.zip && \
    unzip ../../antlr4-cpp-runtime-4.9.3-source.zip -d ../ && \
    cmake .. -DANTLR_JAR_LOCATION=/usr/local/lib/antlr-4.9.3-complete.jar -DWITH_DEMO=True && \
    make && \
    make install && \
    rm -rf /work

WORKDIR /

RUN wget https://apt.llvm.org/llvm.sh && \
    chmod +x llvm.sh && \
    ./llvm.sh 13

WORKDIR /usr/src/app

CMD bash