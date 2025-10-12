## $\textnormal{Best Practices for Sending Patches}$

> - A few tips and best practices for sending patches:

```plaintext
- Run "scripts/checkpatch.pl" before sending the patch. Note
  that "checkpatch.pl" might suggest changes that are unnecessary!
  Use your best judgement when deciding whether it makes sense
  to make the change "checkpatch.pl" suggests. The end goal is for
  the code to be more readable. If "checkpatch.pl" suggests a
  change and you think the end result is not more readable,
  don't make the change. For example, if a line is 81 characters
  long, but breaking it makes the resulting code look ugly,
  don't break that line.

- Compile and test your change.

- Document your change and include relevant testing details and
  results of that testing.

- "Signed-off-by" should be the last tag.

- As a general rule, don't include change lines in the commit log.

- Remember that good patches get accepted quicker. It is important
  to understand how to create good patches.

- Copy mailing lists and maintainers/developers suggested by
  "scripts/get_maintainer.pl".

- Be patient and wait for a minimum of one week before requesting
  for comments. It could take longer than a week during busy periods
  such as the merge windows.

- Always thank the reviewers for their feedback and address them.

- Don’t hesitate to ask a clarifying question if you don’t understand the comment.

- When working on a patch based on a suggested idea, make sure to
  give credit using the "Suggested-by: tag. Other tags used for
  giving credit are "Tested-by", "Reported-by".

  Other Tags: https://www.kernel.org/doc/html/latest/process/submitting-patches.html#using-reported-by-tested-by-reviewed-by-suggested-by-and-fixes

- Remember that the reviewers help improve code. Don’t take it
  personally and handle the feedback gracefully. Please don’t
  do top post when responding to emails. Responses should be
  inlined.

- Keep in mind that the community doesn’t have any obligation to
  accept your patch. Patches are pulled, not pushed. Always give
  a reason for the maintainer to take your patch.

- Be patient and be ready to make changes and working with the
  reviewers. It could take multiple versions before your patch
  gets accepted. It is okay to disagree with maintainers and
  reviewers. Please don't ignore a review because you disagree
  with it. Present your reasons for disagreeing, along with
  supporting technical data such as benchmarks and other
  improvements.

- In general, getting response and comments is a good sign
  that the community likes the patch and wants to see it improved.
  Silence is what you want to be concerned about. If you
  don't hear any response back from the maintainer after
  a week, feel free to either send the patch again, or send
  a gentle "ping" - something like "Hi, I know you are busy,
  but have you found time to look at my patch?"

- Expect to receive comments and feedback at any time during
  the review process.

- Stay engaged and be ready to fix problems, if any, after
  the patch gets accepted into linux-next for integration
  into the mainline. Kernel build and Continuous Integration
  (CI) bots and rings u`sually find problems.

- When a patch gets accepted, you will either see an email
  from the maintainer or an automated patch accepted email
  with information on which tree it has been applied to,
  and some estimate on when you can expect to see it in the
  mainline kernel. Not all maintainers might send an email
  when the patch gets merged. The patch could stay in linux-next
  for integration until the next merge window, before it gets
  into Linus's tree. Unless the patch is an actual fix to
  a bug in Linus's tree, in which case, it may go directly into his tree.

- Sometimes you need to send multiple related patches. This
  is useful for grouping, say, to group driver clean up patches
  for one particular driver into a set, or grouping patches
  that are part of a new feature into one set. git format-patch
  -2 -s --cover-letter --thread --subject-prefix="PATCH v3"
  --to= “name” --cc=” name” will create a threaded patch series
  that includes the top two commits and generated cover letter
  template. It is a good practice to send a cover letter when
  sending a patch series.

- Including patch series version history in the cover letter
  will help reviewers get a quick snapshot of changes from
  version to version.

  https://lkml.org/lkml/2019/9/17/657

- When a maintainer accepts a patch, the maintainer assumes
  maintenance responsibility for that patch. As a result,
  maintainers have decision power on how to manage patch
  flow into their individual sub-system(s) and they also
  have individual preferences. Be prepared for
  maintainer-to-maintainer differences in commit log
  content and sub-system specific coding styles.
```
