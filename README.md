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
