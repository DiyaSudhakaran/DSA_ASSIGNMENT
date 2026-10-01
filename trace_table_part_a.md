# Trace Table – Part (a): Level-Order Traversal

Tree representation used: **general tree using first-child / next-sibling links**.

| Step | Queue before deletion | Deleted/Visited node | Children added to queue | Queue after addition |
|---:|---|---|---|---|
| 1 | CEO | CEO | HR, Finance, IT | HR, Finance, IT |
| 2 | HR, Finance, IT | HR | None | Finance, IT |
| 3 | Finance, IT | Finance | None | IT |
| 4 | IT | IT | Development, Testing | Development, Testing |
| 5 | Development, Testing | Development | Frontend, Backend | Testing, Frontend, Backend |
| 6 | Testing, Frontend, Backend | Testing | None | Frontend, Backend |
| 7 | Frontend, Backend | Frontend | None | Backend |
| 8 | Backend | Backend | None | Empty |

### Level-order result
`CEO -> HR -> Finance -> IT -> Development -> Testing -> Frontend -> Backend`
