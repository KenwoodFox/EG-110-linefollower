---
title:
 - Expedition Colonizing Mars
subtitle:
 - Version &hash
author:
 - Joe
 - Aiden
 - James
institute:
 - SNHU/CETA, EG-110
titlegraphic: ../../resources/TeamLogo.png
theme: Berlin
navigation: frame
date: "Build Date: &date"
aspectratio: 1610
logo: resources/TeamLogo.png
fontsize: 8pt
---


# Stakeholders

| Stakeholder    | Priority | What do they want?                                           |
| -------------- | -------- | ------------------------------------------------------------ |
| Customers      | 3.5      | Their goods to be shipped                                    |
| Public Service | 4.5      | Public goods transported (water, food to a town for example) |


# Problem Statement

## Problem statement

How can we successfully create a reliable shipping and transport solution that can be relied on by martians?


# Design Requirements and Verification Methods

| #   | Requirement                                       | Type    | Verification | Success Criteria                                                                                              |
| --- | ------------------------------------------------- | ------- | ------------ | ------------------------------------------------------------------------------------------------------------- |
| 1   | Transport Stuff                                   | Direct  | perf.        | Solution transports stuff (50lb+)                                                                             |
| 1.1 | Traverse for a reasonable distance without refuel | Derived | perf.        | Solution will be able to travel for some amount of time under its own power without recharge or refuel (2hrs) |
| 1.2 | Transport an appropriate volume of stuff          | Derived | perf.        | Solution will transport a useful volume of stuff, defined by its ratio of solution mass to cargo mass (1m^3)  |
| 2   | Follow a path/line                                | Direct  | comp         | Solution will follow or stick to a path/line/gps directions etc                                               |
| 2.1 | Complete a path in a specific time                | Derived | perf.        | Solution will complete a given path, track, journey or job in an appropriate amount of time. (<2hrs)          |
| 2.2 | Traverse incomplete/inhospitable terrain          | Direct  | comp         | Solution will be able to traverse the undeveloped landscape of mars without need for a roadway or rail        |
| 3   | Navigate autonomously                             | Direct  | comp         | Solution should be able to complete rounds, jobs, tracks or journeys with minimal or no human interaction.    |
