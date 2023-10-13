/**
 * @Author: Xia Yunkai
 * @Date:   2023-10-14 01:31:27
 * @Last Modified by:   Xia Yunkai
 * @Last Modified time: 2023-10-14 01:34:07
 */


/**
 * 
 * @param {*} ctx 
 * @param {*} start 
 * @param {*} end 
 */
function drawLine(ctx, start, end) {
    ctx.moveTo(start.x, start.y)
    ctx.lineTo(end.x, end.y)
}