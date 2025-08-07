# HikingRoutes

## 📌 Description

This project implements a C program for managing and exploring hiking trail data.  
It supports storing information about various hiking routes, searching them using different criteria, and estimating hiking time based on elevation and distance.

It was developed as part of a university assignment in 2021.

---

## 🏞️ Features

Each trail entry includes:

- Starting location (up to 50 characters)
- Ending location (up to 50 characters)
- Trail length in meters
- Elevation gain (uphill) in meters
- Elevation loss (downhill) in meters
- Maximum elevation in meters
- Minimum elevation in meters

---

## 🛠️ Core Functions

The program supports the following commands:

| Command | Function |
|--------|----------|
| `i`    | Read trail data from user input |
| `p`    | Print all trails (sorted by descending length) with both directions shown |
| `l`    | Find and display all trails with length ≤ L |
| `s`    | Find all trails starting from a specific location |
| `u`    | Display only uphill trails (uphill > downhill) |
| `d`    | Display only downhill trails (downhill > uphill) |
| `h`    | Display trails whose elevation range is within a given [min, max] |
| `t`    | Display trails with estimated time ≤ T (in minutes) |
| `q`    | Quit program |

---
