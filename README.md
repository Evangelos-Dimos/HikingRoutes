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

## 📌 readFromInput

**Input:**<br>
3<br>
Grand Canyon Village<br>
7800 600 200 2100 1900<br>
Bright Angel Trailhead<br>
Bright Angel Trailhead<br>
4200 300 300 2100 1800<br>
Bright Angel Trailhead<br>
Lake Michigan<br>
15000 1000 1000 250 180<br>
Lake Michigan<br>

## 📌 printData

**Input:** *(no input)*

**Output:**
From Lake Michigan to Lake Michigan<br>
Uphill 1000, Downhill 1000<br>
Max altitude 250, Min altitude 180<br>
Length 15000, Estimated time 331 min<br>

From Grand Canyon Village to Bright Angel Trailhead<br>
Uphill 600, Downhill 200<br>
Max altitude 2100, Min altitude 1900<br>
Length 7800, Estimated time 230 min<br>

From Bright Angel Trailhead to Grand Canyon Village<br>
Uphill 200, Downhill 600<br>
Max altitude 2100, Min altitude 1900<br>
Length 7800, Estimated time 120 min<br>

From Bright Angel Trailhead to Bright Angel Trailhead<br>
Uphill 300, Downhill 300<br>
Max altitude 2100, Min altitude 1800<br>
Length 4200, Estimated time 94 min<br>

## 📌 findShort

**Input:**<br>
5000<br>

**Output:**<br>
From Bright Angel Trailhead to Bright Angel Trailhead<br>
Uphill 300, Downhill 300<br>
Max altitude 2100, Min altitude 1800<br>
Length 4200, Estimated time 94 min<br>

## 📌 findLocation

**Input:**<br>
Bright Angel Trailhead<br>

**Output:**
From Bright Angel Trailhead to Bright Angel Trailhead<br>
Uphill 300, Downhill 300<br>
Max altitude 2100, Min altitude 1800<br>
Length 4200, Estimated time 94 min<br>

From Bright Angel Trailhead to Grand Canyon Village<br>
Uphill 200, Downhill 600<br>
Max altitude 2100, Min altitude 1900<br>
Length 7800, Estimated time 120 min<br>

## 📌 findUpHill

**Input:** *(no input)*

**Output:**<br>
From Grand Canyon Village to Bright Angel Trailhead<br>
Uphill 600, Downhill 200<br>
Max altitude 2100, Min altitude 1900<br>
Length 7800, Estimated time 230 min<br>

From Bright Angel Trailhead to Bright Angel Trailhead<br>
Uphill 300, Downhill 300<br>
Max altitude 2100, Min altitude 1800<br>
Length 4200, Estimated time 94 min<br>

## 📌 findDownHill

**Input:** *(no input)*

**Output:**<br>
From Bright Angel Trailhead to Grand Canyon Village<br>
Uphill 200, Downhill 600<br>
Max altitude 2100, Min altitude 1900<br>
Length 7800, Estimated time 120 min<br>

## 📌 findAltitude

**Input:**<br>
100 2000<br>

**Output:**<br>
From Lake Michigan to Lake Michigan<br>
Uphill 1000, Downhill 1000<br>
Max altitude 250, Min altitude 180<br>
Length 15000, Estimated time 331 min<br>

## 📌 findTimely

**Input:**<br>
240<br>

**Output:**<br>
From Grand Canyon Village to Bright Angel Trailhead<br>
Uphill 600, Downhill 200<br>
Max altitude 2100, Min altitude 1900<br>
Length 7800, Estimated time 230 min<br>

From Bright Angel Trailhead to Grand Canyon Village<br>
Uphill 200, Downhill 600<br>
Max altitude 2100, Min altitude 1900<br>
Length 7800, Estimated time 120 min<br>

From Bright Angel Trailhead to Bright Angel Trailhead<br>
Uphill 300, Downhill 300<br>
Max altitude 2100, Min altitude 1800<br>
Length 4200, Estimated time 94 min<br>

## 📌 Quit (`q`)

**Ends the program**
