# Ray Tracing in one weekend
I stumbled upon this amazing resource from make_your_own_x github repo the [ray_tracing_in_one_weekend](https://raytracing.github.io/books/RayTracingInOneWeekend.html). It is through enough to create a solid background even for begineers. For the longest time i have only been continously learning and not applying that knowlege to build something. There are lot of things involved in this that i will encounter for the first time so i will create a section wise readme.md file to retain and reflect back on what i have learned. 

## Table of Contents
- [Overview](#overview)
- [Goals](#goals)
- [Learning Path](#learning-path)
- [Resources](#resources)
- [Progress Tracking](#progress-tracking)
- [Contributing](#contributing)
- [License](#license)

## Overview
- [Output an Image](Section1/notes.md)
- The vec3 class
- Rays, a simple camera and background
- Adding a sphere
- Surface Normals and Multiple Objects
- Moving Camera code into its own class
- Antialiasing
- Diffuse Materials
- Metal
- Dielectrics
- Potitionable Camera
- Defocus Blur

## Goals
- Understand Verilog syntax, semantics, and procedural blocks.
- Design and simulate digital circuits using Verilog.
- Gain proficiency with tools like Icarus Verilog, ModelSim, and Xilinx Vivado.
- Build portfolio-worthy projects, such as a 4-bit counter and an 8-bit ALU.
- Apply Verilog to real-world applications, including FPGA implementation.

## Learning Path
The learning path is divided into phases with specific objectives, tasks, and projects to ensure steady progress.

### Phase 1: Verilog Fundamentals (Weeks 1-2)
- **Objective**: Learn Verilog basics and digital design concepts.
- **Tasks**:
  - Study digital logic (gates, flip-flops, FSMs) using [HDLBits](https://hdlbits.circuits.io).
  - Read "Verilog HDL" by Samir Palnitkar (Chapters 1-4).
  - Learn Verilog syntax: modules, ports, data types, and operators.
  - Practice simple Verilog code (e.g., AND gate, multiplexer) on HDLBits.
- **Project**: Design a 4-bit counter in Verilog using EDA Playground.
- **Milestone**: Simulate and verify the 4-bit counter with a testbench.

### Phase 2: Intermediate Verilog and Tool Setup (Weeks 3-4)
- **Objective**: Master procedural blocks and set up development tools.
- **Tasks**:
  - Study Verilog procedural blocks (`initial`, `always`, `task`, `function`) and control flow (`if`, `case`, `for`).
  - Install and configure Icarus Verilog and ModelSim for simulation.
  - Explore Xilinx Vivado for FPGA synthesis and implementation.
  - Practice coding combinational and sequential circuits (e.g., shift register).
- **Project**: Implement a finite state machine (FSM) for a traffic light controller.
- **Milestone**: Verify the FSM with a testbench and simulate in ModelSim.

### Phase 3: Advanced Verilog and Project Development (Weeks 5-6)
- **Objective**: Apply Verilog to complex designs and optimize circuits.
- **Tasks**:
  - Learn advanced Verilog concepts: parameterized modules, generate statements.
  - Study timing analysis and optimization techniques in Vivado.
  - Build and simulate an 8-bit arithmetic logic unit (ALU).
  - Join Verilog communities on X or forums like Stack Overflow for feedback.
- **Project**: Design an 8-bit ALU with operations (add, subtract, AND, OR).
- **Milestone**: Simulate the ALU and generate timing reports in Vivado.

### Phase 4: FPGA Implementation and Portfolio Building (Weeks 7-8)
- **Objective**: Deploy designs on FPGA and create a portfolio.
- **Tasks**:
  - Implement the 8-bit ALU on an FPGA board using Xilinx Vivado.
  - Learn testbench design for verification and debugging.
  - Document projects with simulation waveforms, code, and reports.
  - Share projects on GitHub and discuss in X communities or EDA forums.
- **Project**: Build a simple RISC-V processor core or a digital communication system.
- **Milestone**: Demonstrate the project on hardware and publish to GitHub.

## Resources

- **Websites**: 
  - [Ray Tracind Website](https://raytracing.github.io/books/RayTracingInOneWeekend.html)
- **Tools**: 
  - [Replit environment](https://replit.com) Pretty cool environment for developemnt in c++. 
Refer to [this](https://www.youtube.com/watch?v=St95nPOwsa8) youtube video to get started. It also has readymade c++ templates for the repl environment. The AI is very helpful for the initial seting up of things.

## Contributing 
Contributions to enhance this learning plan are welcome! To contribute:
1. Fork this repository.
2. Create a new branch (`git checkout -b feature/your-feature`).
3. Make changes and commit (`git commit -m "Add your feature"`).
4. Push to the branch (`git push origin feature/your-feature`).
5. Open a pull request.

Ensure contributions align with the plan’s structure and goals.

## License
This learning plan is licensed under the [MIT License](LICENSE).

---
