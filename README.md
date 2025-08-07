# HikingRoutes

## 📌 Description

This project implements a C program for managing and exploring hiking route data and was developed as part of a university assignment in 2021. 
It supports storing information about various hiking routes, searching them using different criteria, and estimating hiking time based on altitude and distance.

---

## 🏞️ Features

Each route entry includes:

- Starting location (up to 50 characters)
- Ending location (up to 50 characters)
- Route length in meters
- Elevation gain (uphill) in meters
- Elevation loss (downhill) in meters
- Maximum altitude in meters
- Minimum altitude in meters

---

## 🛠️ Core Functions

The program supports the following commands:

| Command | Function |
|--------|----------|
| `i`    | Read route data from user input |
| `p`    | Print all routes (sorted by descending length) with both directions shown |
| `l`    | Find and display all routes with length ≤ L |
| `s`    | Find all routes starting from a specific location |
| `u`    | Display only uphill routes (uphill > downhill) |
| `d`    | Display only downhill routes (downhill > uphill) |
| `h`    | Display routes whose altitude range is within a given [min, max] |
| `t`    | Display routes with estimated time ≤ T (in minutes) |
| `q`    | Quit program |

---

## 🥾 Hiking Routes Program — Input/Output Examples

| Function         | Input                                                                                 | Output                                                                                                                                                                                                                                                                                    |
|------------------|----------------------------------------------------------------------------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| **readFromInput**| ```
3
Grand Canyon Village
7800 600 200 2100 1900
Bright Angel Trailhead
Bright Angel Trailhead
4200 300 300 2100 1800
Bright Angel Trailhead
Lake Michigan
15000 1000 1000 250 180
Lake Michigan
``` | Stores 3 routes in memory |
| **printData**    | *(no input)*                                                                           | ```
From Lake Michigan to Lake Michigan
Uphill 1000, Downhill 1000
Max altitude 250, Min altitude 180
Length 15000, Estimated time 331 min

From Grand Canyon Village to Bright Angel Trailhead
Uphill 600, Downhill 200
Max altitude 2100, Min altitude 1900
Length 7800, Estimated time 230 min

From Bright Angel Trailhead to Grand Canyon Village
Uphill 200, Downhill 600
Max altitude 2100, Min altitude 1900
Length 7800, Estimated time 120 min

From Bright Angel Trailhead to Bright Angel Trailhead
Uphill 300, Downhill 300
Max altitude 2100, Min altitude 1800
Length 4200, Estimated time 94 min
``` |
| **findShort**    | `5000`                                                                                 | ```
From Bright Angel Trailhead to Bright Angel Trailhead
Uphill 300, Downhill 300
Max altitude 2100, Min altitude 1800
Length 4200, Estimated time 94 min
``` |
| **findLocation** | `Bright Angel Trailhead`                                                               | ```
From Bright Angel Trailhead to Bright Angel Trailhead
Uphill 300, Downhill 300
Max altitude 2100, Min altitude 1800
Length 4200, Estimated time 94 min

From Bright Angel Trailhead to Grand Canyon Village
Uphill 200, Downhill 600
Max altitude 2100, Min altitude 1900
Length 7800, Estimated time 120 min
``` |
| **findUpHill**   | *(no input)*                                                                           | ```
From Grand Canyon Village to Bright Angel Trailhead
Uphill 600, Downhill 200
Max altitude 2100, Min altitude 1900
Length 7800, Estimated time 230 min
``` |
| **findDownHill** | *(no input)*                                                                           | ```
From Bright Angel Trailhead to Grand Canyon Village
Uphill 200, Downhill 600
Max altitude 2100, Min altitude 1900
Length 7800, Estimated time 120 min
``` |
| **findAltitude** | `100 1000`                                                                             | ```
From Lake Michigan to Lake Michigan
Uphill 1000, Downhill 1000
Max altitude 250, Min altitude 180
Length 15000, Estimated time 331 min
``` |
| **findTimely**   | `100`                                                                                  | ```
From Bright Angel Trailhead to Bright Angel Trailhead
Uphill 300, Downhill 300
Max altitude 2100, Min altitude 1800
Length 4200, Estimated time 94 min
``` |

---

### 📌 Notes
- Circular routes (e.g., from Lake Michigan to Lake Michigan) are only printed once.
- For non-circular routes, the return direction is also shown with uphill/downhill reversed.
- Estimated time is calculated using the **adapted Naismith’s Rule**:

