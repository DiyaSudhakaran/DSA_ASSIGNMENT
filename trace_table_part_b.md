# Trace Table – Part (b): Linear Search vs Binary Search

Sorted department array:

`[Backend, Development, Finance, Frontend, HR, IT, Testing]`

## Search 1 – Frontend

| Method | Step | Position checked | Value | Comparison | Result |
|---|---:|---:|---|---|---|
| Linear | 1 | 1 | Backend | Frontend != Backend | Continue |
| Linear | 2 | 2 | Development | Frontend != Development | Continue |
| Linear | 3 | 3 | Finance | Frontend != Finance | Continue |
| Linear | 4 | 4 | Frontend | Frontend == Frontend | Found |
| Binary | 1 | 4 | Frontend | Frontend == Frontend | Found |

**Comparisons: Linear = 4, Binary = 1**

## Search 2 – HR

| Method | Step | Position checked | Value | Comparison | Result |
|---|---:|---:|---|---|---|
| Linear | 1 | 1 | Backend | HR != Backend | Continue |
| Linear | 2 | 2 | Development | HR != Development | Continue |
| Linear | 3 | 3 | Finance | HR != Finance | Continue |
| Linear | 4 | 4 | Frontend | HR != Frontend | Continue |
| Linear | 5 | 5 | HR | HR == HR | Found |
| Binary | 1 | 4 | Frontend | HR > Frontend | Search right half |
| Binary | 2 | 6 | IT | HR < IT | Search left half |
| Binary | 3 | 5 | HR | HR == HR | Found |

**Comparisons: Linear = 5, Binary = 3**

## Search 3 – Testing

| Method | Step | Position checked | Value | Comparison | Result |
|---|---:|---:|---|---|---|
| Linear | 1 | 1 | Backend | Testing != Backend | Continue |
| Linear | 2 | 2 | Development | Testing != Development | Continue |
| Linear | 3 | 3 | Finance | Testing != Finance | Continue |
| Linear | 4 | 4 | Frontend | Testing != Frontend | Continue |
| Linear | 5 | 5 | HR | Testing != HR | Continue |
| Linear | 6 | 6 | IT | Testing != IT | Continue |
| Linear | 7 | 7 | Testing | Testing == Testing | Found |
| Binary | 1 | 4 | Frontend | Testing > Frontend | Search right half |
| Binary | 2 | 6 | IT | Testing > IT | Search right half |
| Binary | 3 | 7 | Testing | Testing == Testing | Found |

**Comparisons: Linear = 7, Binary = 3**
