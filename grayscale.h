
bool cudaInit(int width, int height);

bool cudaProcess(
    const unsigned char* input,
    unsigned char* output,
    int width,
    int height
);

void cudaCleanup();
