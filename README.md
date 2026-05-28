# LONELY (Local Object Network Exploit Logger & Yield)

LONELY is a lightweight, high-performance network reconnaissance and exploit vector logging utility written in modern C++. Built with a strict focus on efficiency and minimalism, it provides fast gateway scanning and real-time security logging directly within the terminal interface.

## Features
- **Lightweight & Fast:** Zero heavy external dependencies, relying entirely on native execution.
- **Structured Logging:** Accurate, time-stamped logs for network analysis and scanning states.
- **Yield Mechanism:** Efficient summaries of discovered vectors and vulnerabilities.
- **Clean Architecture:** Fully written with explicit Allman-style formatting and encapsulated within custom namespaces.

## Usage
Run the executable with an optional target IP address. If no argument is provided, it defaults to the local gateway:
```bash
./lonely 192.168.1.105
```
## Architecture & Style
LONELY strictly follows the **KISS** (Keep It Simple, Stupid) principle and is optimized for low memory usage. The codebase uses the Allman style for bracket alignment, ensuring high readability and seamless minification for single-line deployment architectures.

## License
This project is open-source and licensed under the **GNU GPL v3.0**. See the LICENSE file for details. All rights reserved by **hypernova-developer**. 
