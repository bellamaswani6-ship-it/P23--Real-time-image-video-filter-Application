# P23--Real-time-image-video-filter-Application
# P23 – Real-Time Image/Video Filter Application Using CUDA

## 1. Project Overview

The **Real-Time Image/Video Filter Application** is a GPU-accelerated image and video processing project developed using NVIDIA CUDA and OpenCV.

The application captures live video from a USB camera, processes video frames using CUDA kernels on the GPU, and displays the processed output in real time.

The main objective is to utilize GPU parallel processing to accelerate image operations and understand the performance benefits of CUDA compared to CPU-based processing.

## 2. Project Objectives

- Capture live video from a USB camera.
- Process image frames using NVIDIA CUDA.
- Implement parallel image-processing operations using CUDA kernels.
- Reduce processing time through GPU acceleration.
- Display processed video frames in real time.
- Understand CPU-GPU memory transfers and CUDA execution.

## 3. System Architecture

The application follows this processing pipeline:

```text
       USB Camera
            |
            v
    Video Frame Capture
         (OpenCV)
            |
            v
     Frame Acquisition
            |
            v
      Host-to-Device
       Memory Copy
            |
            v
       CUDA Kernel
     (GPU Processing)
            |
            v
      Device-to-Host
       Memory Copy
            |
            v
      Processed Frame
            |
            v
       Display Output
         (OpenCV)
```

## 4. Technologies Used

| Technology | Purpose |
|---|---|
| C++ | Application development |
| NVIDIA CUDA | GPU parallel processing |
| OpenCV | Camera capture and image display |
| V4L2 | Linux camera interface |
| USB 2.0 Camera | Live video input |
| Ubuntu Linux | Development environment |

## 5. Camera Configuration

The application uses a USB camera through the OpenCV VideoCapture interface with the V4L2 backend.

**Camera configuration:**

- Resolution: 640 × 480
- Pixel Format: YUYV
- Interface: USB 2.0
- Capture Backend: V4L2

YUYV is used as the camera input format. OpenCV converts the captured frames into BGR format for further processing and display.

## 6. CUDA Processing

CUDA is used to execute image-processing operations in parallel on the GPU.

Each CUDA thread processes an individual pixel or a portion of the image, depending on the implemented kernel.

**CUDA concepts used:**

- CUDA Kernels
- Thread and Block Configuration
- Grid Configuration
- Device Memory Allocation
- Host-to-Device Memory Transfer
- Device-to-Host Memory Transfer
- CUDA Synchronization
- CUDA Error Handling

## 7. CUDA APIs Used

| CUDA API | Purpose |
|---|---|
| `cudaGetDeviceCount()` | Retrieves the number of CUDA-capable devices |
| `cudaGetDeviceProperties()` | Retrieves GPU device properties |
| `cudaSetDevice()` | Selects the CUDA device |
| `cudaMalloc()` | Allocates GPU memory |
| `cudaFree()` | Releases GPU memory |
| `cudaMemcpy()` | Transfers data between CPU and GPU |
| `cudaDeviceSynchronize()` | Waits for GPU operations to complete |
| `cudaGetLastError()` | Retrieves the last CUDA error |
| `cudaEventRecord()` | Records an event in a CUDA stream |
| `cudaEventElapsedTime()` | Measures elapsed GPU execution time |

## 8. Application Workflow

1. Initialize the USB camera using OpenCV.
2. Capture video frames from the camera.
3. Convert the captured frame into the required processing format.
4. Allocate GPU memory.
5. Copy image data from host memory to device memory.
6. Launch CUDA kernels for parallel processing.
7. Copy the processed image back to host memory.
8. Display the processed frame using OpenCV.
9. Repeat the process for continuous video processing.

## 9. Hardware and Software Requirements

### Hardware
- NVIDIA GPU supporting CUDA
- USB 2.0 Camera
- Linux-compatible computer or NVIDIA Jetson platform

### Software
- Ubuntu Linux
- NVIDIA CUDA Toolkit
- NVIDIA GPU Driver
- OpenCV
- C++ Compiler
- CMake (if used by the project build configuration)

## 10. Build and Run

Clone the repository:

```bash
git clone git@github.com:bellamaswani6-ship-it/P23--Real-time-image-video-filter-Application.git
```

Navigate to the project directory:

```bash
cd P23--Real-time-image-video-filter-Application
```

Build the project using the build instructions and configuration provided in the source code.

Run the generated executable:

```bash
./your_executable_name
```

*Note: Replace the executable name and build commands with the actual names used in your project.*

## 11. Expected Outcome

- Continuous video capture from a USB camera.
- GPU-based parallel image processing.
- Real-time display of processed video frames.
- Practical understanding of CUDA memory management and GPU execution.

## 12. Future Enhancements

- Implement additional image filters.
- Optimize CPU-GPU memory transfers.
- Explore CUDA streams for overlapping data transfers and computation.
- Measure and compare CPU and GPU processing performance.
- Improve frame-processing throughput.

## 13. Author

**Project:** P23 – Real-Time Image/Video Filter Application Using CUDA

**GitHub:** [bellamaswani6-ship-it](https://github.com/bellamaswani6-ship-it)

---

**Project Focus:** Real-Time Video Processing | NVIDIA CUDA | GPU Parallel Computing | OpenCV | C++
