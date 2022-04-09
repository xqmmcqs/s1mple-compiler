FROM adoptopenjdk/openjdk11:jre

SHELL ["/bin/bash", "-c"]

RUN apt-get update && \
    apt-get install -y --no-install-recommends \
    g++ \
    cmake \
    make \
    build-essential \
    zlib1g-dev && \
    apt-get clean -y && \
    rm -rf /var/lib/apt/lists/*

RUN curl https://www.antlr.org/download/antlr-4.9.3-complete.jar -o /usr/local/lib/antlr-4.9.3-complete.jar && \
    echo -e "export CLASSPATH=\".:/usr/local/lib/antlr-4.9.3-complete.jar:\$CLASSPATH\"\nalias antlr4='java -Xmx500M -cp \"/usr/local/lib/antlr-4.9.3-complete.jar:\$CLASSPATH\" org.antlr.v4.Tool'\nalias grun='java -Xmx500M -cp \"/usr/local/lib/antlr-4.9.3-complete.jar:\$CLASSPATH\" org.antlr.v4.gui.TestRig'" >> ~/.bashrc && \
    source ~/.bashrc

WORKDIR /work/cpp/build

RUN apt-get update && \
    apt-get install -y --no-install-recommends \
    pkg-config \
    uuid-dev \
    git \
    unzip && \
    curl https://www.antlr.org/download/antlr4-cpp-runtime-4.9.3-source.zip -o ../../antlr4-cpp-runtime-4.9.3-source.zip && \
    unzip ../../antlr4-cpp-runtime-4.9.3-source.zip -d ../ && \
    cmake .. -DANTLR_JAR_LOCATION=/usr/local/lib/antlr-4.9.3-complete.jar -DWITH_DEMO=True && \
    make && \
    make install && \
    rm -rf /work && \
    apt-get purge -y --auto-remove \
    pkg-config \
    uuid-dev \
    git \
    unzip && \
    apt-get clean -y && \
    rm -rf /var/lib/apt/lists/*

WORKDIR /

RUN apt-get update && \
    apt-get install -y --no-install-recommends \
    gpg-agent \
    lsb-release \
    wget \
    software-properties-common && \
    wget https://apt.llvm.org/llvm.sh && \
    chmod +x llvm.sh && \
    ./llvm.sh 13 && \
    echo -e "export PATH=\$PATH:/usr/lib/llvm-13/bin" >> ~/.bashrc && \
    source ~/.bashrc && \
    apt-get purge -y --auto-remove \
    gpg-agent \
    lsb-release \
    wget \
    software-properties-common && \
    apt-get clean -y && \
    rm -rf /var/lib/apt/lists/*

WORKDIR /usr/src/app

CMD bash