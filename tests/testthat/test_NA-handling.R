library(ELLsae)

context("Testing the NA handling of ellsea function")

# example data from "clustermeans"
df.survey <- data.frame(y = c(1,2,3,4,1,2,3,4,1),
                        a = c(1,2,3,1,2,3,1,2,3),
                        b = c(5,6,4,8,2,6,9,8,5))

df.survey.NAexpl <- data.frame(y = c(1,2,3,4,1,2,3,4,1),
                        a = c(1,2,3,1,2,3,1,2,3),
                        b = c(5,6,4,NA,2,6,9,8,5))

df.survey.NAloc <- data.frame(y = c(1,2,3,4,1,2,3,4,1),
                              a = c(1,2,3,NA,2,3,1,2,3),
                              b = c(5,6,4,8,2,6,9,8,5))
df.census <- data.frame(a = (c(1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1)),
                        b = c(5,3,7,2,5,4,7,5,1,1,7,9,5,4,7,2),
                        d = c(11,12,13,14,15,16,17,18,19,10,12,13,8,9,7,8))

df.census.NAloc <- data.frame(a = (c(1,2,3,1,2,3,1,NA,3,1,2,3,1,2,3,1)),
                        b = c(5,3,7,2,5,4,7,5,1,1,7,9,5,4,7,2),
                        d = c(11,12,13,14,15,16,17,18,19,10,12,13,8,9,7,8))



test_that("If there are NA in the location_survey 
          variable an error is thrown", {
  expect_error(ellsae(model = y ~ a + b, clustermeans = "b",
                      surveydata = df.survey.NAloc, censusdata = df.census,
                      location_survey = "a", seed = 12345,
                      output = "all", n_boot = 50L))
  expect_error(ellsae(model = y ~ a + b, clustermeans = "b",
                      surveydata = df.survey, 
                      censusdata = df.census.NAloc,
                      location_survey = "a", seed = 12345,
                      output = "all", n_boot = 50L))
  
  expect_error(ellsae(model = y ~ a + b, clustermeans = "b",
                        surveydata = df.survey.NAexpl, censusdata = df.census,
                        location_survey = "a", seed = 12345,
                        output = "all", n_boot = 50L))
            
})